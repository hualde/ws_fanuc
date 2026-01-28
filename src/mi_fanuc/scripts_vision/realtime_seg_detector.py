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

    def get_orientation_pca_3d(self, pts_3d):
        """Calcula el eje principal y el ángulo de inclinación 3D respecto al plano de la cámara."""
        if len(pts_3d) < 3:
            return 0.0, np.array([0, 0, 1]), np.mean(pts_3d, axis=0)

        # Normalizar puntos
        mean = np.mean(pts_3d, axis=0)
        p_centered = pts_3d - mean

        # PCA
        cov = np.cov(p_centered.T)
        evals, evecs = np.linalg.eig(cov)

        # Autovector principal
        sort_indices = np.argsort(evals)[::-1]
        principal_axis = evecs[:, sort_indices[0]]

        # Asegurar que el vector apunte "hacia arriba" o estandarizar si es necesario
        # (Opcional, pero para ángulos 0-90 suele bastar tomar valor absoluto de Z)
        
        # Calcular ángulo con respecto al plano de la imagen (XY)
        # El plano XY tiene normal Z=(0,0,1).
        # El ángulo de un vector v con un plano es arcsin( dot(v, n) / (|v|*|n|) )
        # Asumiendo vector normalizado:
        tilt_angle_rad = math.asin(abs(principal_axis[2]))
        
        return tilt_angle_rad, principal_axis, mean

    def project_3d_to_pixel(self, pt_3d):
        """Proyecta un punto 3D (x,y,z) a píxeles (u,v)."""
        x, y, z = pt_3d
        if z <= 0: return None # Evitar división por cero o puntos detrás
        u = int((x * self.fx) / z + self.cx_cam)
        v = int((y * self.fy) / z + self.cy_cam)
        return (u, v)

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
                
                # 2. Obtener Z Real (Profundidad) de la pieza y calcular PCA 3D
                # Creamos una máscara binaria para indexar el depth
                binary_mask = np.zeros(depth_img.shape, dtype=np.uint8)
                cv2.fillPoly(binary_mask, [pts.astype(np.int32)], 1)
                
                # Aplicar máscara a la visualización de depth (RESTAURADO)
                masked_depth_viz[binary_mask == 1] = depth_img[binary_mask == 1]
                
                # Obtener coordenadas de los píxeles dentro de la máscara
                ys, xs = np.where(binary_mask == 1)
                
                # Extraer valores de profundidad
                z_values = depth_img[ys, xs]
                
                # Filtrar valores inválidos
                valid_indices = (z_values > 0) & (~np.isnan(z_values))
                z_valid = z_values[valid_indices]
                ys_valid = ys[valid_indices]
                xs_valid = xs[valid_indices]
                
                z_dist = 0.0
                tilt_angle_deg = 0.0
                
                if len(z_valid) > 10: # Necesitamos suficientes puntos
                    z_dist = float(np.median(z_valid))
                    
                    # Reconstruir nube de puntos 3D para PCA
                    # X = (u - cx) * Z / fx
                    # Y = (v - cy) * Z / fy
                    x_3d = (xs_valid - self.cx_cam) * z_valid / self.fx
                    y_3d = (ys_valid - self.cy_cam) * z_valid / self.fy
                    
                    pts_3d = np.vstack((x_3d, y_3d, z_valid)).T
                    
                    # Calcular orientación 3D
                    tilt_angle_rad, axis_3d, mean_3d = self.get_orientation_pca_3d(pts_3d)
                    tilt_angle_deg = math.degrees(tilt_angle_rad)
                elif len(z_valid) > 0:
                     z_dist = float(np.median(z_valid))
                
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
                # Dibujar eje principal (línea de dirección) - VERDE (2D PCA - Imagen)
                length = 100
                p1 = (cx, cy)
                p2 = (int(cx + axis[0] * length), int(cy + axis[1] * length))
                cv2.arrowedLine(annotated, p1, p2, (0, 255, 0), 3, tipLength=0.3)
                
                # Dibujar EJE 3D PROYECTADO - ROSA (Muestra la orientación real incluyendo el TILT)
                # Si el objeto está muy inclinado, esta flecha se verá más corta (foreshortening)
                if len(z_valid) > 10:
                    axis_length_m = 0.20 # 20 cm de longitud de flecha en el mundo real
                    p_start_3d = mean_3d
                    p_end_3d = mean_3d + axis_3d * axis_length_m
                    
                    uv_start = self.project_3d_to_pixel(p_start_3d)
                    uv_end = self.project_3d_to_pixel(p_end_3d)
                    
                    if uv_start and uv_end:
                         cv2.arrowedLine(annotated, uv_start, uv_end, (255, 0, 255), 3, tipLength=0.3)
                         cv2.putText(annotated, "3D Axis", (uv_end[0]+5, uv_end[1]), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (255,0,255), 1)

                # Dibujar CENTROIDE (Punto de Grasp)
                cv2.circle(annotated, (cx, cy), 10, (255, 255, 255), -1) 
                cv2.circle(annotated, (cx, cy), 6, (0, 0, 255), -1)
                cv2.line(annotated, (cx - 15, cy), (cx + 15, cy), (0, 0, 255), 2)
                cv2.line(annotated, (cx, cy - 15), (cx, cy + 15), (0, 0, 255), 2)
                
                # Info text
                deg = math.degrees(angle)
                info = f"Z:{z_dist:.2f}m | 2D:{deg:.0f} | Tilt:{tilt_angle_deg:.1f}"
                cv2.putText(annotated, info, (cx + 15, cy - 35), 
                           cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 255, 255), 2)
                
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
