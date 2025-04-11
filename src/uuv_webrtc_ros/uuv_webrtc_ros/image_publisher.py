#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

class ImagePublisher(Node):
    def __init__(self):
        super().__init__('image_publisher')
        self.publisher_ = self.create_publisher(Image, 'video_frames', 10)
        self.bridge = CvBridge()
        
        # 使用摄像头或视频文件
        self.cap = cv2.VideoCapture(0)  # 0为默认摄像头，或替换为视频路径
        
        if not self.cap.isOpened():
            self.get_logger().error("无法打开视频源")
            raise RuntimeError("Video source not available")
        
        self.timer = self.create_timer(0.033, self.timer_callback)  # ~30Hz
        self.get_logger().info("图像发布者已启动")

    def timer_callback(self):
        ret, frame = self.cap.read()
        if ret:
            try:
                ros_image = self.bridge.cv2_to_imgmsg(frame, "bgr8")
                self.publisher_.publish(ros_image)
            except Exception as e:
                self.get_logger().error(f"转换错误: {e}")
        else:
            self.get_logger().warn("帧读取失败")

    def __del__(self):
        if hasattr(self, 'cap'):
            self.cap.release()

def main(args=None):
    rclpy.init(args=args)
    publisher = ImagePublisher()
    try:
        rclpy.spin(publisher)
    except KeyboardInterrupt:
        pass
    finally:
        publisher.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()