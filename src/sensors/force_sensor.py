#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
import busio
import digitalio
import board
import adafruit_mcp3xxx.mcp3008 as MCP
from adafruit_mcp3xxx.analog_in import AnalogIn

class FlexiForceSensorNode(Node):
    def __init__(self):
        super().__init__('flexiforce_sensor_node')
        self.publisher_ = self.create_publisher(Float32, 'force_data', 10)
        self.timer_period = 0.5  # seconds (adjust as needed)
        self.timer = self.create_timer(self.timer_period, self.read_sensor)

        # SPI bus
        spi = busio.SPI(clock=board.SCK, MISO=board.MISO, MOSI=board.MOSI)

        # Chip select (CS)
        cs = digitalio.DigitalInOut(board.D22)  # Use the correct pin

        # Create an MCP3008 object
        mcp = MCP.MCP3008(spi, cs)

        # Analog input on Pin 0 (P0)
        self.sensor_channel = AnalogIn(mcp, MCP.P0)

    def read_sensor(self):
        # Read the voltage
        voltage = self.sensor_channel.voltage
        
        # TODO: Convert the voltage to force using calibration data
        # For now, we'll assume a direct proportion (not accurate)
        force = voltage * 100  # Placeholder conversion
        
        msg = Float32()
        msg.data = force
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s" N' % msg.data)

def main(args=None):
    rclpy.init(args=args)
    sensor_node = FlexiForceSensorNode()
    rclpy.spin(sensor_node)
    sensor_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()