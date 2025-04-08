#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from hello_ev_interfaces.srv import String
import time

class HelloEvServer(Node):
    def __init__(self):
        super().__init__('hello_ev_server')
        self.srv = self.create_service(
            String, 
            'hello_ev', 
            self.handle_request)
        
        """
        # 创建定时器,每2秒打印一次
        self.timer = self.create_timer(0.5, self.timer_callback)
        self.student_info = "未收到学生信息"
        
    def timer_callback(self):
        self.get_logger().info(f"当前学生信息: {self.student_info}")
        """

    
    def handle_request(self, request, response):
        self.student_info = request.request  # 保存学生信息
        response.response = f"Received: {request.request}"
        self.get_logger().info(f'收到请求: "{request.request}"')
        return response

def main(args=None):
    rclpy.init(args=args)
    server = HelloEvServer()
    rclpy.spin(server)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
