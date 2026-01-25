import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    # Define the package and launch file to include
    fanuc_moveit_config_dir = get_package_share_directory('fanuc_moveit_config')
    launch_file_path = os.path.join(fanuc_moveit_config_dir, 'launch', 'fanuc_moveit.launch.py')

    # Include the launch file with the specified arguments
    moveit_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(launch_file_path),
        launch_arguments={
            'use_mock': 'true',
            'robot_model': 'crx30ia'
        }.items()
    )

    return LaunchDescription([
        moveit_launch
    ])
