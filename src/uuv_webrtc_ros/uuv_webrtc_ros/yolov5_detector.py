#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from ultralytics import YOLO
import cv2
import numpy as np

class YOLOv11Detector(Node):
    def __init__(self):
        super().__init__('yolov11_detector')
        
        # 订阅原始图像话题
        self.subscription = self.create_subscription(
            Image,
            'video_frames',  # 与image_publisher发布的话题一致
            self.detect_callback,
            10
        )
        
        # 发布检测后的图像话题
        self.publisher_ = self.create_publisher(Image, 'detected_frames', 10)
        self.bridge = CvBridge()
        
        # 加载YOLOv11模型（权重文件需提前下载）
        self.model = YOLO('yolov11s.pt')  # 或 yolov11m.pt/yolov11l.pt
        self.get_logger().info("YOLOv11检测器已启动！")

    def detect_callback(self, msg):
        try:
            # 将ROS图像消息转换为OpenCV格式
            cv_image = self.bridge.imgmsg_to_cv2(msg, 'bgr8')
            
            # YOLOv11推理（参数可调整）
            results = self.model.predict(
                cv_image,
                imgsz=640,      # 输入图像尺寸
                conf=0.5,       # 置信度阈值
                iou=0.45,       # NMS IoU阈值
                device='cuda' if torch.cuda.is_available() else 'cpu'  # 自动选择设备
            )
            
            # 渲染检测结果（自动绘制框和标签）
            rendered_img = results[0].plot()  # 返回带检测框的BGR图像
            
            # 将OpenCV图像转换回ROS消息并发布
            ros_img = self.bridge.cv2_to_imgmsg(rendered_img, 'bgr8')
            self.publisher_.publish(ros_img)
            
            # 可选：打印检测到的物体信息
            for box in results[0].boxes:
                self.get_logger().info(
                    f"检测到: {results[0].names[int(box.cls)]} "
                    f"置信度: {float(box.conf):.2f}"
                )
                
        except Exception as e:
            self.get_logger().error(f"检测失败: {e}")

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