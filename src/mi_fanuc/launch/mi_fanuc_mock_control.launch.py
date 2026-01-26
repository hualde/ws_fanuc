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
        .planning_pipelines(pipelines=["ompl"])
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

    # Static Transform Publisher (robot base to world if needed, though world is in URDF)
    # static_tf = Node(
    #     package="tf2_ros",
    #     executable="static_transform_publisher",
    #     name="static_transform_publisher",
    #     arguments=["0", "0", "0", "0", "0", "0", "world", "base_link"],
    # )

    # Include mock control if use_mock is true
    # We'll use the original hardware interface launch but with our URDF
    include_fanuc_mock_control = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution([
                FindPackageShare("fanuc_hardware_interface"),
                "launch",
                "fanuc_mock_control.launch.py",
            ])
        ),
        launch_arguments={
            "robot_model": "crx30ia", # This is used by the hardware interface to find specific configs
            "robot_series": "crx",
            "launch_rviz": "false",
        }.items(),
    )

    return [
        move_group_node,
        rviz_node,
        include_fanuc_mock_control
    ]

def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument("use_mock", default_value="true"),
        OpaqueFunction(function=launch_setup)
    ])
