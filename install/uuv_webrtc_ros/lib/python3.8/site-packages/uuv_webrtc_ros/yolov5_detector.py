#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import torch
import numpy as np

class YOLOv5Detector(Node):
    def __init__(self):
        super().__init__('yolov5_detector')
        self.subscription = self.create_subscription(
            Image,
            'video_frames',
            self.detect_callback,
            10
        )
        self.publisher_ = self.create_publisher(Image, 'detected_frames', 10)
        self.bridge = CvBridge()
        
        # 加载YOLOv5模型
        self.model = torch.hub.load('ultralytics/yolov5', 'yolov5s', pretrained=True)
        self.classes = self.model.names
        self.get_logger().info("YOLOv5检测器已启动")

    def detect_callback(self, msg):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
            
            # 执行检测
            results = self.model(cv_image)
            
            # 渲染检测结果
            rendered_img = np.squeeze(results.render())
            
            # 发布检测后的图像
            ros_img = self.bridge.cv2_to_imgmsg(rendered_img, "bgr8")
            self.publisher_.publish(ros_img)
            
        except Exception as e:
            self.get_logger().error(f"检测错误: {e}")

def main(args=None):
    rclpy.init(args=args)
    detector = YOLOv5Detector()
    try:
        rclpy.spin(detector)
    except KeyboardInterrupt:
        pass
    finally:
        detector.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()