from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # 启动摄像头/视频发布节点
        Node(
            package='uuv_webrtc_ros',
            executable='image_publisher',
            name='image_publisher',
            output='screen'
        ),
        
        # 启动 YOLOv5 检测节点
        Node(
            package='uuv_webrtc_ros',
            executable='yolov11_detector',
            name='yolov11_detector',
            output='screen',
            # 如果 YOLOv5 需要参数，可以在这里传递：
            # parameters=[{'model_name': 'yolov5s'}]
        ),
        
        # 启动检测结果订阅节点（显示带检测框的图像）
        Node(
            package='uuv_webrtc_ros',
            executable='image_subscriber',
            name='image_subscriber',
            output='screen'
        )
    ])