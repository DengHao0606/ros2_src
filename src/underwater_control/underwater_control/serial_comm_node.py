#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial
import json

class SerialCommNode(Node):
    def __init__(self):
        super().__init__('serial_comm_node')
        self.get_logger().info("串口程序已启动")
        
        # 参数声明
        self.declare_parameter('serial_port', '/dev/ttyUSB0')
        self.declare_parameter('baud_rate', 9600)
        
        # 获取参数
        port = self.get_parameter('serial_port').value
        baud = self.get_parameter('baud_rate').value
        
        # 初始化串口
        try:
            self.ser = serial.Serial(port, baud, timeout=1)
            self.get_logger().info(f"成功连接串口 {port}@{baud}bps")
        except serial.SerialException as e:
            self.get_logger().error(f"串口连接失败: {str(e)}")
            self.get_logger().error("请检查: 1) 串口设备是否存在 2) 用户是否有读写权限")
            raise RuntimeError("串口初始化失败")  # 使节点退出
            
        # 订阅控制指令
        self.subscription = self.create_subscription(
            String,
            'serial_command',
            self.command_callback,
            rclpy.qos.qos_profile_sensor_data  # 使用传感器数据QoS
        )
    
    def command_callback(self, msg):
        try:
            data = json.loads(msg.data)
            x = float(data['x'])
            y = float(data['y'])
            
            if "left" in data['direction']:
                #self.get_logger().info("🔄 准备发送顺时针指令")  # 新增日志
                self.send_frame(0x01, x, y)
            elif "right" in data['direction']:
                #self.get_logger().info("🔄 准备发送逆时针指令")  # 新增日志
                self.send_frame(0x02, x, y)
            else:
                self.get_logger().info("啥也没有")  # 新增日志

        except Exception as e:
            self.get_logger().error(f"❌ 回调异常: {str(e)}")
    
    def send_frame(self, command, x, y):
        """self.get_logger().info(
        f"串口状态: is_open={self.ser.is_open}, writable={self.ser.writable()}"
        )"""
    
        """发送带坐标的数据帧"""
        try:
            x_percent = int(x * 100)
            y_percent = int(y * 100)
            
            frame = bytes([
                0xAA, 0xBB,                  # 帧头
                command,                      # 指令
                #x_percent & 0xFF,             # X坐标低字节
                #(x_percent >> 8) & 0xFF,      # X坐标高字节
                #y_percent & 0xFF,             # Y坐标低字节
                #(y_percent >> 8) & 0xFF,      # Y坐标高字节
                0xCC, 0xDD                    # 帧尾
            ])
            
            # 调试输出
            #self.get_logger().info(f"准备发送串口数据: {frame.hex(' ')}")
            self.get_logger().info(f"串口数据: {frame.hex(' ')}")
            # 检查串口是否可写
            if not self.ser.writable():
                self.get_logger().error("串口不可写!")
                return
                
            bytes_written = self.ser.write(frame)
            self.get_logger().debug(f"实际写入字节数: {bytes_written}")
            
        except Exception as e:
            self.get_logger().error(f"发送帧失败: {str(e)}")

def main(args=None):
    rclpy.init(args=args)
    node = SerialCommNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.ser.close()
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()