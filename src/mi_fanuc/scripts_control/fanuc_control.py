#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from pymoveit2 import MoveIt2
import time

class FanucControl(Node):
    def __init__(self):
        super().__init__("fanuc_control_node")

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

        self.get_logger().info("🚀 Fanuc Control Node Iniciado")

    def go_home(self):
        self.get_logger().info("🏠 Moviendo brazo a HOME...")
        # Valores de 'home' del SRDF
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

def main():
    rclpy.init()
    node = FanucControl()

    try:
        # Secuencia de prueba básica
        node.go_home()
        time.sleep(1.0)
        
        node.open_gripper()
        time.sleep(1.0)
        
        node.close_gripper()
        time.sleep(1.0)
        
        node.open_gripper()
        
        node.get_logger().info("✨ Secuencia básica completada con éxito")
    
    except Exception as e:
        node.get_logger().error(f"❌ Error en la ejecución: {e}")
    
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()
