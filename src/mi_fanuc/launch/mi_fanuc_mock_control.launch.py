import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, OpaqueFunction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from moveit_configs_utils import MoveItConfigsBuilder

def launch_setup(context, *args, **kwargs):
    use_mock = LaunchConfiguration("use_mock")
    
    mi_fanuc_share = get_package_share_directory("mi_fanuc")
    
    # Paths to custom files
    urdf_file = os.path.join(mi_fanuc_share, "urdf", "crx30ia_robotiq.urdf.xacro")
    srdf_file = os.path.join(mi_fanuc_share, "config", "crx30ia_robotiq.srdf")
    
    # Build MoveIt configuration
    moveit_config = (
        MoveItConfigsBuilder("crx30ia_robotiq", package_name="mi_fanuc")
        .robot_description(file_path=urdf_file, mappings={"use_mock": use_mock.perform(context)})
        .robot_description_semantic(file_path=srdf_file)
        .trajectory_execution(file_path="config/moveit_controllers.yaml")
        .joint_limits(file_path="config/joint_limits.yaml")
        .robot_description_kinematics(file_path="config/kinematics.yaml")
        .pilz_cartesian_limits(file_path="config/pilz_cartesian_limits.yaml")
        .planning_pipelines(pipelines=["ompl", "pilz_industrial_motion_planner"])
        .planning_scene_monitor(publish_robot_description=True, publish_robot_description_semantic=True)
        .to_moveit_configs()
    )

    # Move Group Node
    move_group_node = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=[moveit_config.to_dict()],
    )

    # RViz2
    rviz_config = os.path.join(get_package_share_directory("fanuc_moveit_config"), "rviz", "view_robot.rviz")
    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="screen",
        parameters=[
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.planning_pipelines,
            moveit_config.robot_description_kinematics,
            moveit_config.joint_limits,
        ],
        arguments=["--display-config", rviz_config],
    )

    # Robot State Publisher
    robot_state_publisher_node = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="screen",
        parameters=[moveit_config.robot_description],
    )

    # ROS 2 Control Node
    ros2_control_config = os.path.join(mi_fanuc_share, "config", "ros2_controllers.yaml")
    ros2_control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[
            moveit_config.robot_description,
            ros2_control_config,
        ],
        output="screen",
    )

    # Controller Spawners
    joint_state_broadcaster_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster", "--controller-manager", "/controller_manager"],
    )

    joint_trajectory_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_trajectory_controller", "--controller-manager", "/controller_manager"],
    )

    gripper_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["gripper_controller", "--controller-manager", "/controller_manager"],
    )

    fanuc_gpio_controller_spawner = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["fanuc_gpio_controller", "--controller-manager", "/controller_manager"],
    )

    return [
        move_group_node,
        rviz_node,
        robot_state_publisher_node,
        ros2_control_node,
        joint_state_broadcaster_spawner,
        joint_trajectory_controller_spawner,
        gripper_controller_spawner,
        fanuc_gpio_controller_spawner,
    ]

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument("use_mock", default_value="true"),
        OpaqueFunction(function=launch_setup)
    ])
