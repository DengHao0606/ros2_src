#!/usr/bin/env python3

import sys
import rclpy
from rclpy.node import Node
from hello_ev_interfaces.srv import String

class HelloEvClient(Node):
    def __init__(self):
        super().__init__('hello_ev_client')
        self.cli = self.create_client(String, 'hello_ev')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('服务未就绪，等待中...')
    
    def send_request(self, name_and_id):
        req = String.Request()
        req.request = name_and_id
        self.future = self.cli.call_async(req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

def main(args=None):
    rclpy.init(args=args)
    
    if len(sys.argv) != 2:
        print(f"使用方法: {sys.argv[0]} <姓名+学号>")
        return 1
    
    client = HelloEvClient()
    response = client.send_request(sys.argv[1])
    client.get_logger().info(f"服务端响应: {response.response}")
    
    client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
