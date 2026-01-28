#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import Point, PoseStamped
from cv_bridge import CvBridge
import cv2
import numpy as np
from ultralytics import YOLO
import os
import math
from pathlib import Path
import message_filters

class RealTimeSegDetector(Node):
    def __init__(self):
        super().__init__('realtime_seg_detector')
        
        # MODELO DE SEGMENTACION (V4)
        model_path = os.path.join(
            os.path.dirname(__file__),
            'segment',
            'runs',
            'segment',
            'steering_segmentation',
            'weights',
            'best.pt'
        )
        
        self.model = YOLO(model_path)
        self.bridge = CvBridge()
        
        # Publicadores
        self.centroid_pub = self.create_publisher(Point, '/steering_rack_centroid', 10)
        self.pose_pub = self.create_publisher(PoseStamped, '/steering_rack_pose', 10)
        
        # Suscriptores Sincronizados (RGB + Depth)
        self.rgb_sub = message_filters.Subscriber(self, Image, '/rgb')
        self.depth_sub = message_filters.Subscriber(self, Image, '/depth')
        
        # Sincronizador de tiempo aproximado
        self.ts = message_filters.ApproximateTimeSynchronizer(
            [self.rgb_sub, self.depth_sub], 
            queue_size=10, 
            slop=0.1
        )
        self.ts.registerCallback(self.callback)
        
        self.frame_count = 0
        
        # Parametros Intrínsecos de la cámara (de tu /camera_info)
        self.fx = 634.0862399675711
        self.fy = 634.0862399675711
        self.cx_cam = 640.0
        self.cy_cam = 360.0

        # Crear ventanas de OpenCV
        win_main = 'Real-Time steering rack Analysis (3D)'
        win_depth = 'Masked Depth Map'
        cv2.namedWindow(win_main, cv2.WINDOW_NORMAL)
        cv2.resizeWindow(win_main, 1280, 720)
        cv2.namedWindow(win_depth, cv2.WINDOW_NORMAL)
        cv2.resizeWindow(win_depth, 640, 480)
        
        # Sliders para ajustar el rango de profundidad (0 a 5 metros)
        cv2.createTrackbar('Min Z (cm)', win_depth, 20, 500, lambda x: None)
        cv2.createTrackbar('Max Z (cm)', win_depth, 150, 500, lambda x: None)
        
        self.get_logger().info('=' * 70)
        self.get_logger().info('🚀 Detector de Segmentación 3D (RGB-D) iniciado')
        self.get_logger().info(f'📦 Modelo: {model_path}')
        self.get_logger().info(f'📡 Publicando Pose en: /steering_rack_pose')
        self.get_logger().info('📺 Ventanas OpenCV abiertas (RGB + Depth Sliders)')
        self.get_logger().info('=' * 70)
    
    def get_orientation_pca(self, pts):
        """Calcula el ángulo principal de un set de puntos usando PCA."""
        # Normalizar puntos
        mean = np.mean(pts, axis=0)
        p_centered = pts - mean
        
        # Matriz de covarianza
        cov = np.cov(p_centered.T)
        
        # Autovalores y autovectores
        evals, evecs = np.linalg.eig(cov)
        
        # El vector con el autovalor más grande es el eje principal
        sort_indices = np.argsort(evals)[::-1]
        principal_axis = evecs[:, sort_indices[0]]
        
        # Calcular ángulo en radianes
        angle = math.atan2(principal_axis[1], principal_axis[0])
        return angle, principal_axis, mean

    def callback(self, rgb_msg, depth_msg):
        self.frame_count += 1
        
        # Obtener valores de los sliders (convertir cm a metros)
        min_z_slider = cv2.getTrackbarPos('Min Z (cm)', 'Masked Depth Map') / 100.0
        max_z_slider = cv2.getTrackbarPos('Max Z (cm)', 'Masked Depth Map') / 100.0
        if max_z_slider <= min_z_slider: max_z_slider = min_z_slider + 0.01

        # Convertir imágenes
        img = self.bridge.imgmsg_to_cv2(rgb_msg, 'bgr8')
        try:
            # Isaac suele enviar depth en 32FC1 (metros)
            depth_img = self.bridge.imgmsg_to_cv2(depth_msg, desired_encoding='passthrough')
        except Exception as e:
            self.get_logger().error(f'Error conversion depth: {e}')
            return
        
        # Inferencia
        results = self.model.predict(img, conf=0.5, verbose=False)
        annotated = results[0].plot()
        
        # Crear visualización de profundidad enmascarada
        masked_depth_viz = np.zeros_like(depth_img)
        
        if results[0].masks is not None:
            for i, mask_pts in enumerate(results[0].masks.xy):
                if len(mask_pts) < 3: continue
                
                # 1. Calcular Centroide y Ángulo 2D mediante PCA
                pts = mask_pts.astype(np.float32)
                angle, axis, centroid_2d = self.get_orientation_pca(pts)
                cx, cy = int(centroid_2d[0]), int(centroid_2d[1])
                
                # 2. Obtener Z Real (Profundidad) de la pieza
                # Creamos una máscara binaria para indexar el depth
                binary_mask = np.zeros(depth_img.shape, dtype=np.uint8)
                cv2.fillPoly(binary_mask, [pts.astype(np.int32)], 1)
                
                # Aplicar máscara a la visualización de depth
                masked_depth_viz[binary_mask == 1] = depth_img[binary_mask == 1]
                
                # Extraer valores de profundidad dentro de la máscara
                piece_depths = depth_img[binary_mask == 1]
                # Filtrar valores no válidos (NaN o <=0)
                piece_depths = piece_depths[~np.isnan(piece_depths)]
                piece_depths = piece_depths[piece_depths > 0]
                
                z_dist = 0.0
                if len(piece_depths) > 0:
                    z_dist = float(np.median(piece_depths)) # Mediana es más robusta al ruido
                
                # 3. Proyectar Píxeles a Metros (3D Real)
                # Formula: X_metraje = (u - cx) * Z / fx
                real_x = (float(cx) - self.cx_cam) * z_dist / self.fx
                real_y = (float(cy) - self.cy_cam) * z_dist / self.fy
                real_z = z_dist

                # 4. Publicar Pose (Posición Real en Metros + Orientación)
                pose_msg = PoseStamped()
                pose_msg.header.stamp = rgb_msg.header.stamp
                pose_msg.header.frame_id = 'world' # Cambiado de 'sim_camera' a 'world'
                pose_msg.pose.position.x = real_x
                pose_msg.pose.position.y = real_y
                pose_msg.pose.position.z = real_z
                
                # Convertir ángulo a cuaternión (rotación sobre Z)
                # Nota: En RViz, X es adelante, Y es izquierda, Z es arriba (en ROS optical frame es distinto)
                pose_msg.pose.orientation.z = math.sin(angle / 2.0)
                pose_msg.pose.orientation.w = math.cos(angle / 2.0)
                
                self.pose_pub.publish(pose_msg)
                
                # 5. Visualización
                # Dibujar eje principal (línea de dirección) - VERDE
                length = 100
                p1 = (cx, cy)
                p2 = (int(cx + axis[0] * length), int(cy + axis[1] * length))
                cv2.arrowedLine(annotated, p1, p2, (0, 255, 0), 3, tipLength=0.3)
                
                # Dibujar CENTROIDE (Punto de Grasp)
                cv2.circle(annotated, (cx, cy), 10, (255, 255, 255), -1) 
                cv2.circle(annotated, (cx, cy), 6, (0, 0, 255), -1)
                cv2.line(annotated, (cx - 15, cy), (cx + 15, cy), (0, 0, 255), 2)
                cv2.line(annotated, (cx, cy - 15), (cx, cy + 15), (0, 0, 255), 2)
                
                # Info text
                deg = math.degrees(angle)
                info = f"Z: {z_dist:.2f}m | Ang: {deg:.1f}deg"
                cv2.putText(annotated, info, (cx + 15, cy - 35), 
                           cv2.FONT_HERSHEY_SIMPLEX, 0.7, (0, 255, 255), 2)
                
                if self.frame_count % 30 == 0:
                    self.get_logger().info(f'📍 Pose detected: {info}')

        # MEJORA DE VISUALIZACIÓN DEPTH (Uso de Sliders)
        # Reemplazamos NaNs por 0
        depth_copy = np.nan_to_num(depth_img.copy())
        
        # Aplicamos el rango de los sliders para la normalización
        depth_norm = (depth_copy - min_z_slider) / (max_z_slider - min_z_slider)
        depth_norm = np.clip(depth_norm * 255, 0, 255).astype(np.uint8)
            
        depth_colored = cv2.applyColorMap(depth_norm, cv2.COLORMAP_JET)
        
        # Aplicar máscara negra al fondo para que destaque la pieza
        background_mask = (masked_depth_viz == 0)
        depth_colored[background_mask] = 0

        # Mostrar FPS/Frame
        cv2.putText(annotated, f'Frame: {self.frame_count}', (10, 30), 
                   cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 0), 2)
        
        cv2.imshow('Real-Time steering rack Analysis (3D)', annotated)
        cv2.imshow('Masked Depth Map', depth_colored)
        
        key = cv2.waitKey(1) & 0xFF
        if key == ord('q') or key == ord('Q'):
            raise KeyboardInterrupt

    def destroy_node(self):
        cv2.destroyAllWindows()
        super().destroy_node()

def main():
    rclpy.init()
    node = RealTimeSegDetector()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
