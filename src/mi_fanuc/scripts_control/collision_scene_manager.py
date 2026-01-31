#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from moveit_msgs.msg import CollisionObject
from shape_msgs.msg import SolidPrimitive
from geometry_msgs.msg import Pose
import time

class CollisionSceneManager(Node):
    def __init__(self):
        super().__init__('collision_scene_manager')
        self.publisher = self.create_publisher(CollisionObject, '/collision_object', 10)
        self.get_logger().info("🛡️ Collision Scene Manager Iniciado")

    def add_box(self, name, frame_id, size, position, orientation=[0.0, 0.0, 0.0, 1.0]):
        """Añade una caja a la escena de MoveIt."""
        obj = CollisionObject()
        obj.header.frame_id = frame_id
        obj.id = name
        
        primitive = SolidPrimitive()
        primitive.type = SolidPrimitive.BOX
        primitive.dimensions = [float(s) for s in size]
        
        pose = Pose()
        pose.position.x = float(position[0])
        pose.position.y = float(position[1])
        pose.position.z = float(position[2])
        pose.orientation.x = float(orientation[0])
        pose.orientation.y = float(orientation[1])
        pose.orientation.z = float(orientation[2])
        pose.orientation.w = float(orientation[3])
        
        obj.primitives.append(primitive)
        obj.primitive_poses.append(pose)
        obj.operation = CollisionObject.ADD
        
        self.publisher.publish(obj)
        self.get_logger().info(f"📦 Objeto '{name}' publicado en MoveIt")

def main():
    rclpy.init()
    node = CollisionSceneManager()
    
    # Esperar un poco a que MoveIt esté listo
    time.sleep(2.0)
    
    # --- DEFINICIÓN DE OBJETOS (Ajustar según Isaac Sim) ---
    
    # 1. Suelo (Floor)
    # Bajamos el suelo un poco más (a Z=-0.02) para evitar que toque la base del robot
    # y MoveIt lo marque como colisión.
    node.add_box(
        name="floor",
        frame_id="world",
        size=[5.0, 5.0, 0.02],
        position=[0.0, 0.0, -0.03] # La superficie queda a Z = -0.02
    )
    
    # 2. Mesa (Table)
    # Valores extraídos de Isaac Sim (Translate: 1.38369, -0.13911, 0.0)
    # Nota: El tamaño [1.2, 0.8, 0.75] es aproximado, ajústalo si la mesa es distinta.
    # Si Z=0 en Isaac Sim es el centro de la mesa, la posición Z debe ser 0.0.
    # Si la mesa está apoyada en el suelo, su centro estará en Z = height/2.
    table_height = 0.75
    node.add_box(
        name="table",
        frame_id="world",
        size=[1.2, 0.8, table_height],
        position=[1.38369, -0.13911, 0.375] # Z=0.375 para que la superficie esté a ~0.75m si el robot está en el suelo
    )
    
    # 3. Pallet
    # Valores extraídos de Isaac Sim (Translate: -0.0005, 1.09944, 0.0)
    pallet_height = 0.15
    node.add_box(
        name="pallet",
        frame_id="world",
        size=[1.2, 0.8, pallet_height],
        position=[-0.0005, 1.09944, 0.075] # Altura/2 si asume centro en Z=0 y base apoyada
    )

    node.get_logger().info("✅ Escena de colisiones configurada. Mantén este nodo abierto o ciérralo (MoveIt recordará los objetos).")
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
