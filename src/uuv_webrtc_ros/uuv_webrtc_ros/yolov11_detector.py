#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from ultralytics import YOLO
import cv2
import os
import torch
import numpy as np

class YOLOv11Detector(Node):
    def __init__(self):
        super().__init__('yolov11_detector')
        
        # 参数配置
        self.declare_parameter('model_path', '~/uuv_ws/src/uuv_webrtc_ros/weights/yolo11s.pt')
        self.declare_parameter('conf_threshold', 0.5)
        self.declare_parameter('device', 'auto')
        
        # 初始化
        self.subscription = self.create_subscription(
            Image, 'video_frames', self.detect_callback, 10)
        self.publisher_ = self.create_publisher(Image, 'detected_frames', 10)
        self.bridge = CvBridge()
        
        # 加载模型
        model_path = os.path.expanduser(
            self.get_parameter('model_path').get_parameter_value().string_value)
        self._load_model(model_path)

    def _load_model(self, model_path):
        """安全加载模型并处理异常"""
        try:
            if not os.path.exists(model_path):
                self.get_logger().warning(f"模型权重 {model_path} 不存在，尝试自动下载...")
                os.makedirs(os.path.dirname(model_path), exist_ok=True)
                torch.hub.download_url_to_file(
                    'https://github.com/WongKinYiu/yolov11/releases/download/v0.1/yolov11s.pt',
                    model_path
                )
            
            # 设备选择逻辑
            device_param = self.get_parameter('device').get_parameter_value().string_value
            if device_param == 'auto':
                device = 'cuda' if torch.cuda.is_available() else 'cpu'
            else:
                device = device_param
            
            self.model = YOLO(model_path).to(device)
            self.get_logger().info(
                f"YOLOv11 加载成功！设备: {device} | "
                f"输入尺寸: {self.model.args['imgsz']} | "
                f"类别数: {len(self.model.names)}"
            )
            
        except Exception as e:
            self.get_logger().error(f"模型加载失败: {str(e)}")
            raise RuntimeError(e)

    def detect_callback(self, msg):
        try:
            # ROS -> OpenCV
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')
            
            # 推理
            results = self.model.predict(
                source=cv_image,
                conf=self.get_parameter('conf_threshold').get_parameter_value().double_value,
                stream=False,  # 禁用流模式以降低延迟
                augment=False  # 禁用测试时增强以提升速度
            )
            
            # 渲染结果 (优化内存处理)
            plotted = results[0].plot()
            if plotted is None:
                plotted = np.zeros_like(cv_image)  # 防止空结果
            
            # OpenCV -> ROS
            ros_img = self.bridge.cv2_to_imgmsg(plotted, encoding='bgr8')
            ros_img.header = msg.header  # 保持时间戳一致
            self.publisher_.publish(ros_img)
            
        except Exception as e:
            self.get_logger().error(f"推理错误: {str(e)}", throttle_duration_sec=5.0)

def main(args=None):
    rclpy.init(args=args)
    try:
        node = YOLOv11Detector()
        rclpy.spin(node)
    except Exception as e:
        print(f"节点崩溃: {str(e)}")
    finally:
        rclpy.shutdown()

if __name__ == '__main__':
    main()