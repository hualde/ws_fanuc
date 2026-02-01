#!/usr/bin/env python3
"""
fanuc_grasp_app.py - Aplicación de agarre robusta para Fanuc CRX
Usa ActionClient directo para máxima fiabilidad y control explícito de errores.
"""

import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from control_msgs.action import GripperCommand
from moveit_msgs.action import MoveGroup
from moveit_msgs.msg import Constraints, PositionConstraint, OrientationConstraint, BoundingVolume
from shape_msgs.msg import SolidPrimitive
from geometry_msgs.msg import Pose
from tf2_ros import Buffer, TransformListener
import time

class FanucGraspApp(Node):
    def __init__(self):
        super().__init__("fanuc_grasp_app")
        
        # 1. Cliente de Acción para MoveGroup
        self._arm_client = ActionClient(self, MoveGroup, '/move_action')
        
        # 2. Cliente de Acción para Gripper
        self._gripper_client = ActionClient(self, GripperCommand, '/gripper_controller/gripper_cmd')
        
        # 3. TF Listener
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)
        
        self.get_logger().info("🚀 Fanuc Grasp App Iniciada")
        
    def wait_for_services(self, timeout=10.0):
        """Espera a que los servidores de MoveIt y Gripper estén listos."""
        self.get_logger().info("⏳ Esperando a que MoveIt esté listo...")
        
        if not self._arm_client.wait_for_server(timeout_sec=timeout):
            self.get_logger().error("❌ No se pudo conectar con MoveGroup")
            return False
            
        if not self._gripper_client.wait_for_server(timeout_sec=timeout):
            self.get_logger().error("❌ No se pudo conectar con Gripper")
            return False
        
        self.get_logger().info("✅ MoveIt y Gripper conectados.")
        return True
    
    
    def move_to_joints(self, joint_angles_deg):
        """Mueve el brazo usando ángulos en grados (Pilz PTP)."""
        import math
        joint_angles_rad = [math.radians(a) for a in joint_angles_deg]
        
        goal_msg = MoveGroup.Goal()
        goal_msg.request.group_name = "manipulator"
        goal_msg.request.start_state.is_diff = True
        
        # Usar Pilz PTP para movimientos de joints
        goal_msg.request.pipeline_id = "pilz_industrial_motion_planner"
        goal_msg.request.planner_id = "PTP"
        
        goal_msg.request.num_planning_attempts = 10
        goal_msg.request.allowed_planning_time = 10.0
        goal_msg.request.max_velocity_scaling_factor = 0.2
        goal_msg.request.max_acceleration_scaling_factor = 0.2
        
        from moveit_msgs.msg import JointConstraint
        constraints = Constraints()
        joint_names = ["J1", "J2", "J3", "J4", "J5", "J6"]
        
        for i in range(6):
            jc = JointConstraint()
            jc.joint_name = joint_names[i]
            jc.position = joint_angles_rad[i]
            jc.tolerance_above = 0.01
            jc.tolerance_below = 0.01
            jc.weight = 1.0
            constraints.joint_constraints.append(jc)
        
        goal_msg.request.goal_constraints.append(constraints)
        
        self.get_logger().info(f"🤖 Moviendo a joints: {joint_angles_deg}")
        send_goal_future = self._arm_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, send_goal_future, timeout_sec=30.0)
        
        if not send_goal_future.done():
            self.get_logger().error("❌ Timeout al enviar goal joints")
            return False
        
        handle = send_goal_future.result()
        if not handle.accepted:
            self.get_logger().error("❌ Petición joints rechazada")
            return False
        
        result_future = handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future, timeout_sec=60.0)
        
        if not result_future.done():
            self.get_logger().error("❌ Timeout esperando resultado joints")
            return False
        
        result = result_future.result()
        
        if result.result.error_code.val == 1:
            self.get_logger().info("✅ Movimiento joints completado")
            return True
        else:
            self.get_logger().error(f"❌ Error MoveIt joints: {result.result.error_code.val}")
            return False
    
    def get_object_pose(self, target_frame="steering_rack_centroid_0"):

        """Obtiene la pose del objeto referido a base_link."""
        for base in ["base_link", "world"]:
            try:
                if self.tf_buffer.can_transform(base, target_frame, rclpy.time.Time()):
                    trans = self.tf_buffer.lookup_transform(
                        base,
                        target_frame,
                        rclpy.time.Time()
                    )
                    self.get_logger().info(
                        f"📍 Objeto detectado referido a {base}: "
                        f"x={trans.transform.translation.x:.3f}, "
                        f"y={trans.transform.translation.y:.3f}"
                    )
                    return trans, base
            except Exception:
                continue
        return None, None
    
    def move_to_pose_ptp(self, x, y, z, ox, oy, oz, ow, velocity_scale=0.2):
        """Mueve el brazo a una pose usando Pilz PTP (Point-to-Point)."""
        
        goal_msg = MoveGroup.Goal()
        goal_msg.request.group_name = "manipulator"
        goal_msg.request.start_state.is_diff = True
        
        # Usar Pilz Industrial Motion Planner (PTP)
        goal_msg.request.pipeline_id = "pilz_industrial_motion_planner"
        goal_msg.request.planner_id = "PTP"
        
        goal_msg.request.num_planning_attempts = 10
        goal_msg.request.allowed_planning_time = 20.0
        goal_msg.request.max_velocity_scaling_factor = velocity_scale
        goal_msg.request.max_acceleration_scaling_factor = velocity_scale
        
        constraints = Constraints()
        
        # Posición
        pc = PositionConstraint()
        pc.header.frame_id = "base_link"
        pc.link_name = "flange"
        bv = BoundingVolume()
        primitive = SolidPrimitive()
        primitive.type = SolidPrimitive.SPHERE
        primitive.dimensions = [0.005]
        bv.primitives.append(primitive)
        target_pose = Pose()
        target_pose.position.x = float(x)
        target_pose.position.y = float(y)
        target_pose.position.z = float(z)
        bv.primitive_poses.append(target_pose)
        pc.constraint_region = bv
        pc.weight = 1.0
        constraints.position_constraints.append(pc)
        
        # Orientación
        oc = OrientationConstraint()
        oc.header.frame_id = "base_link"
        oc.link_name = "flange"
        oc.orientation.x = float(ox)
        oc.orientation.y = float(oy)
        oc.orientation.z = float(oz)
        oc.orientation.w = float(ow)
        oc.absolute_x_axis_tolerance = 0.01
        oc.absolute_y_axis_tolerance = 0.01
        oc.absolute_z_axis_tolerance = 0.01
        oc.weight = 1.0
        constraints.orientation_constraints.append(oc)
        
        goal_msg.request.goal_constraints.append(constraints)
        
        self.get_logger().info(f"🚚 PTP a: ({x:.3f}, {y:.3f}, {z:.3f})")
        send_goal_future = self._arm_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, send_goal_future, timeout_sec=30.0)
        
        if not send_goal_future.done():
            self.get_logger().error("❌ Timeout al enviar goal")
            return False
        
        handle = send_goal_future.result()
        if not handle.accepted:
            self.get_logger().error("❌ Petición rechazada")
            return False
        
        result_future = handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future, timeout_sec=60.0)
        
        if not result_future.done():
            self.get_logger().error("❌ Timeout esperando resultado")
            return False
        
        result = result_future.result()
        
        if result.result.error_code.val == 1:
            self.get_logger().info("✅ Movimiento PTP completado")
            return True
        else:
            self.get_logger().error(f"❌ Error MoveIt: {result.result.error_code.val}")
            return False
    
    def move_to_pose_lin(self, x, y, z, ox, oy, oz, ow, velocity_scale=0.05):
        """Mueve el brazo linealmente usando Pilz LIN."""
        
        goal_msg = MoveGroup.Goal()
        goal_msg.request.group_name = "manipulator"
        goal_msg.request.start_state.is_diff = True
        
        # Usar Pilz Industrial Motion Planner (LIN)
        goal_msg.request.pipeline_id = "pilz_industrial_motion_planner"
        goal_msg.request.planner_id = "LIN"
        
        goal_msg.request.num_planning_attempts = 10
        goal_msg.request.allowed_planning_time = 20.0
        goal_msg.request.max_velocity_scaling_factor = velocity_scale
        goal_msg.request.max_acceleration_scaling_factor = velocity_scale
        
        constraints = Constraints()
        
        # Posición
        pc = PositionConstraint()
        pc.header.frame_id = "base_link"
        pc.link_name = "flange"
        bv = BoundingVolume()
        primitive = SolidPrimitive()
        primitive.type = SolidPrimitive.SPHERE
        primitive.dimensions = [0.005]
        bv.primitives.append(primitive)
        target_pose = Pose()
        target_pose.position.x = float(x)
        target_pose.position.y = float(y)
        target_pose.position.z = float(z)
        bv.primitive_poses.append(target_pose)
        pc.constraint_region = bv
        pc.weight = 1.0
        constraints.position_constraints.append(pc)
        
        # Orientación
        oc = OrientationConstraint()
        oc.header.frame_id = "base_link"
        oc.link_name = "flange"
        oc.orientation.x = float(ox)
        oc.orientation.y = float(oy)
        oc.orientation.z = float(oz)
        oc.orientation.w = float(ow)
        oc.absolute_x_axis_tolerance = 0.01
        oc.absolute_y_axis_tolerance = 0.01
        oc.absolute_z_axis_tolerance = 0.01
        oc.weight = 1.0
        constraints.orientation_constraints.append(oc)
        
        goal_msg.request.goal_constraints.append(constraints)
        
        self.get_logger().info(f"📏 LIN a: ({x:.3f}, {y:.3f}, {z:.3f})")
        send_goal_future = self._arm_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, send_goal_future, timeout_sec=30.0)
        
        if not send_goal_future.done():
            self.get_logger().error("❌ Timeout al enviar goal LIN")
            return False
        
        handle = send_goal_future.result()
        if not handle.accepted:
            self.get_logger().error("❌ Petición LIN rechazada")
            return False
        
        result_future = handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future, timeout_sec=60.0)
        
        if not result_future.done():
            self.get_logger().error("❌ Timeout esperando resultado LIN")
            return False
        
        result = result_future.result()
        
        if result.result.error_code.val == 1:
            self.get_logger().info("✅ Movimiento LIN completado")
            return True
        else:
            self.get_logger().error(f"❌ Error MoveIt LIN: {result.result.error_code.val}")
            return False
    
    def control_gripper(self, position):
        """Abre o cierra la pinza (0.0 = Abierto, 0.8 = Cerrado)."""
        goal_msg = GripperCommand.Goal()
        goal_msg.command.position = float(position)
        goal_msg.command.max_effort = 100.0
        
        action_name = "Abriendo" if position < 0.1 else "Cerrando"
        self.get_logger().info(f"🖐 {action_name} gripper...")
        
        send_goal_future = self._gripper_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, send_goal_future, timeout_sec=5.0)
        
        if not send_goal_future.done():
            self.get_logger().error("❌ Gripper Timeout")
            return False
        
        handle = send_goal_future.result()
        if not handle.accepted:
            self.get_logger().error("❌ Gripper Rechazado")
            return False
        
        result_future = handle.get_result_async()
        rclpy.spin_until_future_complete(self, result_future, timeout_sec=5.0)
        
        self.get_logger().info("✅ Gripper OK")
        return True
    
    def get_current_pose(self):
        """Retorna la pose actual de 'flange' respecto a 'base_link'."""
        try:
            trans = self.tf_buffer.lookup_transform(
                "base_link",
                "flange",
                rclpy.time.Time()
            )
            return (
                trans.transform.translation.x,
                trans.transform.translation.y,
                trans.transform.translation.z,
                trans.transform.rotation.x,
                trans.transform.rotation.y,
                trans.transform.rotation.z,
                trans.transform.rotation.w
            )
        except Exception as e:
            self.get_logger().error(f"❌ Error obteniendo pose actual: {e}")
            return None

def main(args=None):
    rclpy.init(args=args)
    node = FanucGraspApp()
    
    try:
        # 0. Esperar a MoveIt
        if not node.wait_for_services():
            node.get_logger().error("❌ No se pudo conectar con MoveIt. ¿Está el launch corriendo?")
            return
        
        # 1. Preparar robot
        node.get_logger().info("🛠️ Secuencia de Agarre Iniciada...")
        node.control_gripper(0.0)  # Abrir
        time.sleep(1.0)
        
        # 2. Buscar objeto (con timeout)
        node.get_logger().info("🔍 Buscando pieza en TF...")
        time.sleep(2.0)  # Esperar a que el buffer de TF se llene
        
        search_timeout = 10.0
        search_start = time.time()
        obj_transform = None
        base_frame = None
        
        while rclpy.ok() and obj_transform is None:
            obj_transform, base_frame = node.get_object_pose()
            if obj_transform is None:
                elapsed = time.time() - search_start
                if elapsed > search_timeout:
                    node.get_logger().error("❌ Timeout: No se encontró 'steering_rack_centroid_0' en TF.")
                    node.get_logger().error("💡 ¿Está corriendo el nodo de detección de objetos?")
                    return
                time.sleep(1.0)
        
        if obj_transform:
            node.get_logger().info(f"✅ Pieza en {base_frame}")
            
            # ===== FASE 0: READY (Waypoint seguro) =====
            node.get_logger().info("🚀 [0/3] Moviendo a READY (Safe Waypoint)...")
            ready_joints = [0.0, 0.0, 0.0, 0.0, -90.0, 0.0]
            success = node.move_to_joints(ready_joints)
            if not success:
                node.get_logger().error("❌ FALLO en READY.")
                return
            time.sleep(1.0)
            
            # ===== FASE 1: APROXIMACIÓN (PTP) =====
            node.get_logger().info("➡️ [1/2] Moviendo a APROXIMACIÓN (PTP - 20% velocidad)...")
            
            # Orientación top-down (mirando hacia abajo)
            ox, oy, oz, ow = 0.0, 0.7071, 0.0, 0.7071
            
            # Aproximación a 40cm sobre el objeto, con offset de -3cm en Y
            approach_x = obj_transform.transform.translation.x
            approach_y = obj_transform.transform.translation.y - 0.06  # Offset -cm en Y
            approach_z = obj_transform.transform.translation.z + 0.40

            
            success = node.move_to_pose_ptp(
                approach_x, approach_y, approach_z,
                ox, oy, oz, ow,
                velocity_scale=0.2
            )
            
            if not success:
                node.get_logger().error("❌ FALLO en aproximación.")
                return
            
            time.sleep(1.0)
            
            # ===== FASE 2: DESCENSO VERTICAL (LIN) =====
            node.get_logger().info("⬇️ [2/2] Descendiendo VERTICALMENTE (LIN - 5% velocidad)...")
            
            # Obtener pose actual para descenso vertical puro
            current = node.get_current_pose()
            if current is None:
                node.get_logger().error("❌ No se pudo obtener pose actual")
                return
            
            # Usar X,Y actuales + Z objetivo + orientación top-down
            descent_x = current[0]
            descent_y = current[1]
            descent_z = obj_transform.transform.translation.z + 0.13  # +13cm 

            
            node.get_logger().info(f"   Desde: X={current[0]:.3f}, Y={current[1]:.3f}, Z={current[2]:.3f}")
            node.get_logger().info(f"   Hacia: X={descent_x:.3f}, Y={descent_y:.3f}, Z={descent_z:.3f}")
            
            success = node.move_to_pose_lin(
                descent_x, descent_y, descent_z,
                ox, oy, oz, ow,
                velocity_scale=0.05
            )
            
            if not success:
                node.get_logger().error("❌ FALLO en descenso.")
                return
            
            time.sleep(1.0)
            
            node.get_logger().info("✅ Robot en posición de AGARRE.")
            node.get_logger().info("💡 Siguiente paso: cerrar la pinza.")
        
        else:
            node.get_logger().warn("⚠️ No se encontró la pieza.")
    
    except KeyboardInterrupt:
        pass
    except Exception as e:
        node.get_logger().error(f"❌ Excepción: {e}")
    finally:
        node.get_logger().info("🔌 Finalizando proceso...")
        node.destroy_node()
        rclpy.shutdown()
        node.get_logger().info("✅ Salida limpia.")

if __name__ == "__main__":
    main()
