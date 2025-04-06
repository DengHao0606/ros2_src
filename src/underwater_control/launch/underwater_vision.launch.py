from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    return LaunchDescription([
        # 摄像头发布节点
        Node(
            package='underwater_control',
            executable='camera_publisher',
            name='camera_publisher',
            output='screen',
            parameters=[{
                'frame_rate': 30.0,
                'resolution': [640, 480],
                'camera_id': 0,
                'show_preview': False
            }]
        ),
        
        # 图像处理服务节点
        Node(
            package='underwater_control',
            executable='image_processor',
            name='image_processor',
            output='screen',
            parameters=[{
                'debug_show': True  # 是否显示OpenCV调试窗口
            }]
        ),
        
        # 控制客户端节点
        Node(
            package='underwater_control',
            executable='control_client',
            name='control_client',
            output='screen'
        ),
        
        # 串口通信节点（可选）
        Node(
            package='underwater_control',
            executable='serial_comm_node',
            name='serial_comm',
            output='screen',
            parameters=[{
                'serial_port': '/dev/ttyUSB0',  # 根据实际设备修改
                'baud_rate': 9600
            }]
        )
    ])