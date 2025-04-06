#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
from custom_interfaces.srv import ImageProcessing
import cv2
import numpy as np

class ImageProcessor(Node):
    def __init__(self):
        super().__init__('image_processor')
        self.srv = self.create_service(
            ImageProcessing, 
            '/image_processing', 
            self.process_callback,
            qos_profile=rclpy.qos.qos_profile_services_default
        )
        self.bridge = CvBridge()
        self.get_logger().info("绿色物体识别服务已启动")

    def process_callback(self, request, response):
        try:
            cv_image = self.bridge.imgmsg_to_cv2(request.image, 'bgr8')
            
            # 转换为HSV颜色空间便于识别绿色
            hsv = cv2.cvtColor(cv_image, cv2.COLOR_BGR2HSV)
            
            # 定义绿色范围 (HSV)
            lower_green = np.array([35, 50, 50])
            upper_green = np.array([85, 255, 255])
            
            # 创建绿色掩膜
            mask = cv2.inRange(hsv, lower_green, upper_green)
            
            # 形态学操作去除噪声
            kernel = np.ones((5,5), np.uint8)
            mask = cv2.morphologyEx(mask, cv2.MORPH_OPEN, kernel)
            mask = cv2.morphologyEx(mask, cv2.MORPH_CLOSE, kernel)
            
            # 寻找轮廓
            contours, _ = cv2.findContours(mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
            
            # 初始化默认响应值
            response.object_x = 0.0
            response.object_y = 0.0
            response.direction = "no_object"
            
            if contours:
                # 找到最大轮廓
                largest = max(contours, key=cv2.contourArea)
                M = cv2.moments(largest)
                
                if M["m00"] > 0:
                    cx = int(M["m10"] / M["m00"])
                    cy = int(M["m01"] / M["m00"])
                    
                    # 计算归一化坐标
                    response.object_x = float(cx) / request.image.width
                    response.object_y = float(cy) / request.image.height
                    
                    # 判断物体在左侧还是右侧
                    img_center_x = request.image.width / 2
                    
                    if cx < img_center_x:
                        response.direction = "left"    # 物体在左侧
                    else:
                        response.direction = "right"   # 物体在右侧
                    
                    # 可视化调试
                    cv2.drawContours(cv_image, [largest], -1, (0,255,0), 2)
                    cv2.circle(cv_image, (cx, cy), 5, (0,0,255), -1)
                    # 绘制垂直中心线
                    cv2.line(cv_image, (int(img_center_x), 0), (int(img_center_x), request.image.height), (255,0,0), 2)
                    
                    # 在图像上显示方向
                    text = f"Direction: {response.direction}"
                    cv2.putText(cv_image, text, (10, 30), cv2.FONT_HERSHEY_SIMPLEX, 
                                0.7, (0, 0, 255), 2)
            
            cv2.imshow("Green Object Detection", cv_image)
            cv2.waitKey(1)
            
        except Exception as e:
            self.get_logger().error(f"处理异常: {str(e)}")
            response.direction = "error"
        
        return response

def main(args=None):
    rclpy.init(args=args)
    node = ImageProcessor()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        cv2.destroyAllWindows()
        rclpy.shutdown()

if __name__ == '__main__':
    main()