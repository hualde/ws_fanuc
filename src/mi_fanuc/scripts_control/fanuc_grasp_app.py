#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from pymoveit2 import MoveIt2
from geometry_msgs.msg import PoseStamped
from tf2_ros import Buffer, TransformListener
import tf2_geometry_msgs
import time
import threading

class FanucGraspApp(Node):
    def __init__(self):
        super().__init__("fanuc_grasp_app")

        # Inicializar interfaces para brazo y pinza
        self.arm = MoveIt2(
            self, 
            joint_names=["J1", "J2", "J3", "J4", "J5", "J6"],
            base_link_name="base_link", 
            end_effector_name="flange",
            group_name="manipulator",
            use_move_group_action=True
        )
        
        self.gripper = MoveIt2(
            self, 
            joint_names=["robotiq_85_left_knuckle_joint"],
            base_link_name="flange", 
            end_effector_name="robotiq_85_left_finger_tip_link",
            group_name="gripper",
            use_move_group_action=True
        )

        # TF Listener
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        # Configuración inicial de velocidades (evitar error 0 de Pilz)
        self.arm.max_velocity = 0.1
        self.arm.max_acceleration = 0.1
        self.gripper.max_velocity = 0.1
        self.gripper.max_acceleration = 0.1

        self.get_logger().info("🚀 Fanuc Grasp App Iniciada")

    def wait_for_services(self, timeout=10.0):
        """Espera a que los servidores de MoveIt estén listos."""
        self.get_logger().info("⏳ Esperando a que MoveIt esté listo...")
        start_time = time.time()
        while time.time() - start_time < timeout:
            if self.arm._MoveIt2__move_action_client.wait_for_server(timeout_sec=1.0):
                self.get_logger().info("✅ MoveIt conectado y listo.")
                return True
            self.get_logger().warn("⚠️ MoveGroup no responde todavía...")
        return False

    def get_object_pose(self, target_frame="steering_rack_centroid_0"):
        """Obtiene la pose del objeto referido a base_link o world."""
        for base in ["base_link", "world"]:
            try:
                # Ya no usamos timeout aquí porque el buffer se llena en segundo plano
                if self.tf_buffer.can_transform(base, target_frame, rclpy.time.Time()):
                    trans = self.tf_buffer.lookup_transform(
                        base,
                        target_frame,
                        rclpy.time.Time()
                    )
                    self.get_logger().info(f"📍 Objeto detectado referido a {base}: x={trans.transform.translation.x:.3f}, y={trans.transform.translation.y:.3f}")
                    return trans, base
            except Exception:
                continue
        return None, None

    def go_home(self):
        self.get_logger().info("🏠 Moviendo brazo a HOME...")
        home_joints = [0.0, 0.0, 0.0, 0.0, -1.5708, 0.0]
        self.arm.move_to_configuration(home_joints)
        self.get_logger().info("✅ Brazo en HOME")

    def open_gripper(self):
        self.get_logger().info("👐 Abriendo pinza...")
        self.gripper.move_to_configuration([0.0])
        self.get_logger().info("✅ Pinza abierta")

    def close_gripper(self):
        self.get_logger().info("✊ Cerrando pinza...")
        self.gripper.move_to_configuration([0.8])
        self.get_logger().info("✅ Pinza cerrada")

    def get_current_pose(self):
        """Retorna la pose actual de 'flange' respecto a 'base_link'."""
        try:
            trans = self.tf_buffer.lookup_transform(
                "base_link",
                "flange",
                rclpy.time.Time()
            )
            pose = PoseStamped()
            pose.header.frame_id = "base_link"
            pose.header.stamp = self.get_clock().now().to_msg()
            pose.pose.position.x = trans.transform.translation.x
            pose.pose.position.y = trans.transform.translation.y
            pose.pose.position.z = trans.transform.translation.z
            pose.pose.orientation = trans.transform.rotation
            return pose
        except Exception as e:
            self.get_logger().error(f"❌ Error obteniendo pose actual: {e}")
            return None

    def move_to_pose(self, pose_stamped):
        """Mueve el brazo a una pose específica."""
        self.get_logger().info(f"🚚 Moviendo a pose: {pose_stamped.pose.position}")
        result = self.arm.move_to_pose(
            pose_stamped.pose,
            "flange"
        )
        if result:
            self.get_logger().info("✅ Movimiento completado")
        else:
            self.get_logger().error("❌ Error en el movimiento")
        return result

    def calculate_pose(self, transform, base_frame, offset_z=0.0, use_top_down=False):
        """Calcula una pose con un offset. 
        Si use_top_down=True, ignora la orientación de visión y mira hacia abajo.
        """
        target_pose = PoseStamped()
        target_pose.header.frame_id = base_frame
        target_pose.header.stamp = self.get_clock().now().to_msg()
        
        target_pose.pose.position.x = transform.transform.translation.x
        target_pose.pose.position.y = transform.transform.translation.y
        target_pose.pose.position.z = transform.transform.translation.z + offset_z
        
        if use_top_down:
            # Orientación mirando hacia abajo (J5 = -90deg aprox)
            # Quaternión para mirar hacia abajo [x, y, z, w]
            target_pose.pose.orientation.x = 0.0
            target_pose.pose.orientation.y = 0.7071
            target_pose.pose.orientation.z = 0.0
            target_pose.pose.orientation.w = 0.7071
        else:
            target_pose.pose.orientation = transform.transform.rotation
        
        return target_pose

def main():
    rclpy.init()
    node = FanucGraspApp()

    # Iniciar spinning en un hilo separado
    spin_thread = threading.Thread(target=rclpy.spin, args=(node,), daemon=True)
    spin_thread.start()

    try:
        # 0. Esperar a MoveIt
        if not node.wait_for_services():
            node.get_logger().error("❌ No se pudo conectar con MoveIt. ¿Está el launch corriendo?")
            return

        # 1. Preparar robot
        node.get_logger().info("🛠️ Secuencia de Diagnóstico Iniciada...")
        node.open_gripper()
        node.go_home()
        
        # 2. Buscar objeto (con timeout)
        node.get_logger().info("🔍 Buscando pieza en TF...")
        obj_transform = None
        base_frame = None
        
        # Esperar a que el buffer de TF se llene
        time.sleep(2.0)
        
        search_timeout = 10.0  # segundos
        search_start = time.time()
        
        while rclpy.ok() and obj_transform is None:
            obj_transform, base_frame = node.get_object_pose()
            if obj_transform is None:
                elapsed = time.time() - search_start
                if elapsed > search_timeout:
                    node.get_logger().error("❌ Timeout: No se encontró 'steering_rack_centroid_0' en TF.")
                    node.get_logger().error("💡 ¿Está corriendo el nodo de detección de objetos (realtime_seg_detector)?")
                    return
                time.sleep(1.0)

        if obj_transform:
            node.get_logger().info(f"✅ Pieza en {base_frame}")
            
            # --- OPCIONES DE PLANIFICACIÓN (PILZ) ---
            node.get_logger().info("ℹ️ Configurando planificador PILZ...")
            try:
                # Usamos las propiedades públicas de pymoveit2
                node.arm.pipeline_id = "pilz_industrial_motion_planner"
                node.arm.planner_id = "PTP"
                node.arm.max_velocity = 0.2     # 20% para aproximación
                node.arm.max_acceleration = 0.2
                node.arm.planning_time = 20.0
                node.get_logger().info("✅ Planificador PTP (20% velocidad) configurado.")
            except Exception as e:
                node.get_logger().warn(f"⚠️ Error configuración Pilz: {e}")

            approach_pose = node.calculate_pose(obj_transform, base_frame, offset_z=0.30, use_top_down=True)
            
            # 3. Mover a Aproximación
            node.get_logger().info("➡️ [1/2] Moviendo a APROXIMACIÓN (PTP)...")
            success = node.move_to_pose(approach_pose)
            
            # CRÍTICO: Esperar a que el movimiento se complete físicamente
            node.get_logger().info("⏳ Esperando a que termine el movimiento de aproximación...")
            node.arm.wait_until_executed()
            node.get_logger().info("✅ Aproximación completada. Procediendo al DESCENSO...")


            # --- PASO 2: DESCENSO LINEAL (PILZ LIN) ---
            node.get_logger().info("✨ Aproximación terminada. Cambiando a modo LINEAL (LIN)...")
            
            try:
                node.arm.planner_id = "LIN"
                node.arm.max_velocity = 0.05    # 5% muy lento
                node.arm.max_acceleration = 0.05
                node.get_logger().info("🐢 Modo LIN activado (5% velocidad).")
            except Exception as e:
                node.get_logger().warn(f"⚠️ Error al activar modo LIN: {e}")

            # MODIFICADO: Usar pose actual para X/Y pero forzar Orientación Ideal para evitar colisiones
            current_pose = node.get_current_pose()
            if current_pose:
                grasp_pose = current_pose
                # 1. Conservar X e Y (Verticalidad estricta)
                # 2. Modificar altura Z
                grasp_pose.pose.position.z = obj_transform.transform.translation.z + 0.08
                
                # 3. Forzar Orientación Limpia (Mirando abajo) para ayudar al solver y evitar colisiones raras (J4)
                grasp_pose.pose.orientation.x = 0.0
                grasp_pose.pose.orientation.y = 0.7071
                grasp_pose.pose.orientation.z = 0.0
                grasp_pose.pose.orientation.w = 0.7071
                
                node.get_logger().info(f"⬇️ [2/2] Descendiendo VERTICALMENTE (X,Y actual) hacia Z={grasp_pose.pose.position.z:.3f}")
            else:
                node.get_logger().warn("⚠️ Fallo al obtener pose actual. Usando cálculo estándar.")
                grasp_pose = node.calculate_pose(obj_transform, base_frame, offset_z=0.08, use_top_down=True)
            
            success_descent = node.move_to_pose(grasp_pose)
            
            if not success_descent:
                 node.get_logger().info("⌛ Verificando posición final de descenso...")
                 time.sleep(8.0)
            
            node.get_logger().info("✅ Robot en posición de AGARRE (Lineal completado).")
            node.get_logger().info("💡 Si el centrado es correcto, el siguiente paso es cerrar la pinza.")
            
        else:
            node.get_logger().warn("⚠️ No se encontró la pieza. Saliendo...")

    except KeyboardInterrupt:
        pass
    except Exception as e:
        node.get_logger().error(f"❌ Excepción detectada: {e}")
    finally:
        node.get_logger().info("🔌 Finalizando proceso...")
        # CRÍTICO: Primero apagamos rclpy para que el hilo de spin termine
        if rclpy.ok():
            rclpy.shutdown()
        
        # Opcional: esperar a que el hilo termine (aunque es daemon)
        # spin_thread.join(timeout=1.0)
        
        node.get_logger().info("✅ Salida limpia.")

if __name__ == "__main__":
    main()
