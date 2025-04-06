#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np
from rcl_interfaces.msg import ParameterDescriptor

class CameraPublisher(Node):
    def __init__(self):
        super().__init__('camera_publisher')
        
        # 声明可配置参数
        self.declare_parameter('frame_rate', 30.0, 
                             ParameterDescriptor(description='发布帧率 (Hz)'))
        self.declare_parameter('resolution', [640, 480],
                             ParameterDescriptor(description='[宽度, 高度]'))
        self.declare_parameter('camera_id', 0,
                             ParameterDescriptor(description='摄像头设备ID'))
        self.declare_parameter('show_preview', True,
                             ParameterDescriptor(description='是否显示实时预览'))
        
        # 获取参数值
        self.frame_rate = self.get_parameter('frame_rate').value
        self.resolution = self.get_parameter('resolution').value
        self.camera_id = self.get_parameter('camera_id').value
        self.show_preview = self.get_parameter('show_preview').value
        
        # 初始化摄像头
        self.cap = cv2.VideoCapture(self.camera_id)
        if not self.cap.isOpened():
            self.get_logger().error(f"无法打开摄像头 {self.camera_id}")
            raise RuntimeError("摄像头初始化失败")
        
        # 设置分辨率
        self.cap.set(cv2.CAP_PROP_FRAME_WIDTH, self.resolution[0])
        self.cap.set(cv2.CAP_PROP_FRAME_HEIGHT, self.resolution[1])
        
        # 创建图像发布者 (使用传感器数据QoS配置)
        self.publisher = self.create_publisher(
            Image, 
            'camera/image_raw', 
            qos_profile=rclpy.qos.qos_profile_sensor_data
        )
        
        self.bridge = CvBridge()
        self.timer = self.create_timer(1.0/self.frame_rate, self.timer_callback)
        self.get_logger().info(
            f"摄像头发布者已启动 - {self.resolution[0]}x{self.resolution[1]} @ {self.frame_rate}Hz"
        )

    def timer_callback(self):
        try:
            ret, frame = self.cap.read()
            if not ret:
                self.get_logger().warn("摄像头读取失败，尝试重新初始化...", throttle_duration_sec=5.0)
                self.reinitialize_camera()
                return
            
            # 图像预处理 (可选)
            frame = self.preprocess_image(frame)
            
            # 发布ROS图像消息
            msg = self.bridge.cv2_to_imgmsg(frame, encoding="bgr8")
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = "camera_optical_frame"
            self.publisher.publish(msg)
            
            # 调试预览窗口
            if self.show_preview:
                cv2.imshow("Camera Preview", frame)
                cv2.waitKey(1)
                
        except Exception as e:
            self.get_logger().error(f"图像捕获异常: {str(e)}", throttle_duration_sec=1.0)

    def preprocess_image(self, frame):
        """图像预处理钩子函数 (可被子类重载)"""
        # 示例: 自动白平衡
        frame = cv2.cvtColor(frame, cv2.COLOR_BGR2LAB)
        avg_a = np.average(frame[:, :, 1])
        avg_b = np.average(frame[:, :, 2])
        frame[:, :, 1] = frame[:, :, 1] - ((avg_a - 128) * 1.1)
        frame[:, :, 2] = frame[:, :, 2] - ((avg_b - 128) * 1.1)
        return cv2.cvtColor(frame, cv2.COLOR_LAB2BGR)

    def reinitialize_camera(self):
        """摄像头重初始化"""
        self.cap.release()
        cv2.waitKey(1000)
        self.cap = cv2.VideoCapture(self.camera_id)
        if self.cap.isOpened():
            self.cap.set(cv2.CAP_PROP_FRAME_WIDTH, self.resolution[0])
            self.cap.set(cv2.CAP_PROP_FRAME_HEIGHT, self.resolution[1])

    def __del__(self):
        """资源清理"""
        if hasattr(self, 'cap'):
            self.cap.release()
        if self.show_preview:
            cv2.destroyAllWindows()

def main(args=None):
    rclpy.init(args=args)
    try:
        node = CameraPublisher()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        node.get_logger().error(f"节点崩溃: {str(e)}")
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()