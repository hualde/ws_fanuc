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

        self.get_logger().info("🚀 Fanuc Grasp App Iniciada")

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

    def calculate_pose(self, transform, base_frame, offset_z=0.0):
        """Calcula una pose con un offset en Z respecto al transform."""
        target_pose = PoseStamped()
        target_pose.header.frame_id = base_frame
        target_pose.header.stamp = self.get_clock().now().to_msg()
        
        target_pose.pose.position.x = transform.transform.translation.x
        target_pose.pose.position.y = transform.transform.translation.y
        target_pose.pose.position.z = transform.transform.translation.z + offset_z
        
        target_pose.pose.orientation = transform.transform.rotation
        
        return target_pose

def main():
    rclpy.init()
    node = FanucGraspApp()

    # Iniciar spinning en un hilo separado
    spin_thread = threading.Thread(target=rclpy.spin, args=(node,), daemon=True)
    spin_thread.start()

    try:
        # 1. Preparar robot
        node.get_logger().info("🛠️ Iniciando secuencia de Pick & Place...")
        node.open_gripper()
        node.go_home()
        
        # 2. Buscar objeto
        node.get_logger().info("🔍 Esperando pieza en el árbol de TFs...")
        obj_transform = None
        base_frame = None
        
        # Esperar un poco a que el buffer de TF se llene
        time.sleep(2.0)
        
        while rclpy.ok():
            obj_transform, base_frame = node.get_object_pose()
            if obj_transform:
                break
            
            if int(time.time()) % 5 == 0:
                frames = node.tf_buffer.all_frames_as_yaml()
                if not frames or frames == "[]":
                     node.get_logger().warn("⚠️ TF Buffer vacío. Verifica Isaac Sim y el detector.")
                else:
                     node.get_logger().info("⌛ Buscando 'steering_rack_centroid_0'...")
            
            time.sleep(1.0)

        if obj_transform:
            node.get_logger().info(f"✅ Pieza en {base_frame}. Ejecutando secuencia...")
            
            # --- SECUENCIA DE PICK ---
            
            # A. Aproximación (Safe distance)
            node.get_logger().info("➡️ [1/4] Moviendo a APROXIMACIÓN...")
            approach_pose = node.calculate_pose(obj_transform, base_frame, offset_z=0.20)
            node.move_to_pose(approach_pose)
            time.sleep(1.0)
            
            # B. Descenso (Grasp point)
            node.get_logger().info("➡️ [2/4] DESCENDIENDO al punto de agarre...")
            # Un pequeño offset de 2cm para no chocar bruscamente si el sensor miente
            grasp_pose = node.calculate_pose(obj_transform, base_frame, offset_z=0.02)
            node.move_to_pose(grasp_pose)
            time.sleep(0.5)
            
            # C. Agarre (Close Gripper)
            node.get_logger().info("➡️ [3/4] CERRANDO pinza...")
            node.close_gripper()
            time.sleep(1.0)
            
            # D. Retraer (Safe height)
            node.get_logger().info("➡️ [4/4] RETRAYENDO con la pieza...")
            retract_pose = node.calculate_pose(obj_transform, base_frame, offset_z=0.25)
            node.move_to_pose(retract_pose)
            
            node.get_logger().info("✨ Secuencia de PICK completada con éxito.")
            
        else:
            node.get_logger().warn("⚠️ Secuencia abortada: Pieza no encontrada.")

    except Exception as e:
        node.get_logger().error(f"❌ Error en la aplicación: {e}")
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()

if __name__ == "__main__":
    main()
