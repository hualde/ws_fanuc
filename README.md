# Fanuc CRX-30iA con Pinza Robotiq - Workspace de ROS 2

Este repositorio contiene un espacio de trabajo (workspace) de ROS 2 para el control y simulación de un brazo robótico **Fanuc CRX-30iA** equipado con una pinza **Robotiq 2f-85**. Integra los drivers industriales de Fanuc con MoveIt 2 para el planeamiento de trayectorias avanzado y proporciona un URDF personalizado para el conjunto completo.

## Descripción del Proyecto

El objetivo principal de este proyecto es proporcionar una integración fluida entre el robot Fanuc y la pinza Robotiq, soportando tanto el **Control Físico** como el **Modo Mock/Simulación**.

### Componentes Clave:
- **`mi_fanuc`**: El paquete principal que contiene los URDFs personalizados (`crx30ia_robotiq.urdf.xacro`), configuraciones de MoveIt 2 y archivos de lanzamiento (launch files) especializados.
- **`fanuc_driver`**: Contiene las interfaces de hardware industriales y controladores (como `ScaledJointTrajectoryController`) para la comunicación con el controlador de Fanuc.
- **`ros2_robotiq_gripper`**: Driver y descripción para la pinza Robotiq de 2 dedos.
- **Integración con MoveIt 2**: Grupos de planificación preconfigurados para el `manipulator` (brazo) y el `gripper` (pinza).

## Flujo de Trabajo y Desarrollo

Recientemente hemos finalizado la configuración del **Mock Control**, asegurando que tanto el brazo robótico como la pinza puedan simularse simultáneamente dentro del framework de ROS 2 Control.

### Mejoras Recientes:
- **Control de la Pinza**: Se corrigió la inicialización del `controller_manager` para cargar correctamente el URDF personalizado que incluye las articulaciones de la pinza.
- **Control del Manipulador**: Se integraron las macros de `ros2_control` de Fanuc en el URDF personalizado para proporcionar las interfaces de hardware necesarias (escalado de velocidad, estado) para el `ScaledJointTrajectoryController`.

## Cómo Ejecutar

### 1. Compilar el workspace
```bash
colcon build --packages-select mi_fanuc
source install/setup.bash
```

### 2. Lanzar el Mock Control (Simulación)
Este archivo de lanzamiento inicia el `controller_manager`, `robot_state_publisher`, `move_group` y `rviz2` con el hardware simulado (mock) habilitado tanto para el brazo como para la pinza.
```bash
ros2 launch mi_fanuc mi_fanuc_mock_control.launch.py
```

### 3. Verificar los Controladores
```bash
ros2 control list_controllers
```
Deberías ver `joint_trajectory_controller`, `gripper_controller` y `fanuc_gpio_controller` como **active**.

## Estructura de Paquetes
- `src/mi_fanuc`: Configuración e integración personalizada.
- `src/fanuc_driver`: Drivers industriales de Fanuc America/Japan.
- `src/fanuc_description`: Modelos estándar de robots Fanuc.
- `src/ros2_robotiq_gripper-humble`: Drivers específicos de Robotiq.
- `src/IFRA_LinkAttacher`: Utilidad para adjuntar/despegar objetos en simulación.
