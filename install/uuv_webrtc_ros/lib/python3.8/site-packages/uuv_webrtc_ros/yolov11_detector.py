#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import torch
import numpy as np

class YOLOv11Detector(Node):
    def __init__(self):
        super().__init__('yolov11_detector')
        # 订阅原始图像
        self.subscription = self.create_subscription(
            Image,
            'video_frames',
            self.detect_callback,
            10
        )
        # 发布带检测结果的图像
        self.publisher_ = self.create_publisher(Image, 'detected_frames', 10)
        self.bridge = CvBridge()
        
        # 初始化YOLOv11模型
        self.model = torch.hub.load('ultralytics/yolov5', 'yolov11s', pretrained=True)  # 自动下载
        self.classes = self.model.names
        self.get_logger().info("YOLOv11检测器已启动")

    def detect_callback(self, msg):
        try:
            # ROS图像转OpenCV
            cv_image = self.bridge.imgmsg_to_cv2(msg, "bgr8")
            
            # YOLOv11检测
            results = self.model(cv_image)
            rendered_img = self.render_detections(cv_image, results)
            
            # 发布检测结果
            ros_img = self.bridge.cv2_to_imgmsg(rendered_img, "bgr8")
            self.publisher_.publish(ros_img)
            
        except Exception as e:
            self.get_logger().error(f"检测错误: {e}")

    def render_detections(self, img, results):
        """绘制检测框和标签"""
        for *xyxy, conf, cls in results.xyxy[0]:
            label = f"{self.classes[int(cls)]} {conf:.2f}"
            cv2.rectangle(img, (int(xyxy[0]), int(xyxy[1])), 
                          (int(xyxy[2]), int(xyxy[3])), (0, 255, 0), 2)
            cv2.putText(img, label, (int(xyxy[0]), int(xyxy[1])-10),
                        cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
        return img

def main(args=None):
    rclpy.init(args=args)
    detector = YOLOv11Detector()
    try:
        rclpy.spin(detector)
    except KeyboardInterrupt:
        pass
    finally:
        detector.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()