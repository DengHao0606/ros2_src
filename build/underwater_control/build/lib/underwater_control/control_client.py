#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from std_msgs.msg import String  # 添加这行导入
from cv_bridge import CvBridge
from custom_interfaces.srv import ImageProcessing
import json

class ControlClient(Node):
    def __init__(self):
        super().__init__('control_client')
        
        # 初始化服务客户端
        self.client = self.create_client(ImageProcessing, 'image_processing')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().warn('等待服务端上线...')
        
        # 初始化图像订阅
        self.subscription = self.create_subscription(
            Image,
            '/camera/image_raw',
            self.image_callback,
            qos_profile=rclpy.qos.qos_profile_sensor_data
        )
        
        # 新增：初始化串口指令发布者 ★ 关键修复 ★
        self.serial_pub = self.create_publisher(
            String, 
            'serial_command', 
            qos_profile=rclpy.qos.QoSProfile(
                depth=10,
                reliability=rclpy.qos.QoSReliabilityPolicy.RELIABLE,
                durability=rclpy.qos.QoSDurabilityPolicy.VOLATILE
            )
        )
        
        self.bridge = CvBridge()
        self.get_logger().info("控制客户端初始化完成")

    # ...保持其他方法不变...

    def image_callback(self, msg):
        try:
            # 异步服务调用
            request = ImageProcessing.Request()
            request.image = msg
            future = self.client.call_async(request)
            future.add_done_callback(self.handle_response)
            
        except Exception as e:
            self.get_logger().error(f"服务调用失败: {str(e)}")
            
    def handle_response(self, future):
        try:
            response = future.result()
            
            # 调试输出
            #self.get_logger().info(f"收到服务端响应: {response}")
            
            msg = String()
            msg_data = {
                'x': response.object_x,
                'y': response.object_y,
                'direction': response.direction
            }
            msg.data = json.dumps(msg_data)
            
            # 调试输出JSON数据
            self.get_logger().debug(f"准备发送JSON数据: {msg.data}")
            
            self.serial_pub.publish(msg)
            
        except Exception as e:
            self.get_logger().error(f"指令处理失败: {str(e)}")

def main(args=None):
    rclpy.init(args=args)
    node = ControlClient()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()