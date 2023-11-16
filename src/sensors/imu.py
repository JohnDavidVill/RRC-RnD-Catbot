#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
import smbus
import time

# MPU-6050 Registers
PWR_MGMT_1 = 0x6B
SMPLRT_DIV = 0x19
CONFIG = 0x1A
GYRO_CONFIG = 0x1B
INT_ENABLE = 0x38
ACCEL_XOUT_H = 0x3B
ACCEL_YOUT_H = 0x3D
ACCEL_ZOUT_H = 0x3F
GYRO_XOUT_H = 0x43
GYRO_YOUT_H = 0x45
GYRO_ZOUT_H = 0x47

class MPU6050Node(Node):
    def __init__(self):
        super().__init__('mpu6050_node')
        self.publisher_ = self.create_publisher(Imu, 'imu_data', 10)
        self.timer_period = 0.1  # seconds
        self.timer = self.create_timer(self.timer_period, self.read_mpu6050)
        self.bus = smbus.SMBus(1)  # or SMBus(0) depending on your hardware
        self.address = 0x68  # MPU6050 default I2C address

        # MPU6050 initialization
        self.bus.write_byte_data(self.address, SMPLRT_DIV, 7)
        self.bus.write_byte_data(self.address, PWR_MGMT_1, 1)
        self.bus.write_byte_data(self.address, CONFIG, 0)
        self.bus.write_byte_data(self.address, GYRO_CONFIG, 24)
        self.bus.write_byte_data(self.address, INT_ENABLE, 1)

    def read_i2c_word(self, reg):
        high = self.bus.read_byte_data(self.address, reg)
        low = self.bus.read_byte_data(self.address, reg+1)
        val = (high << 8) + low

        if (val >= 0x8000):
            return -((65535 - val) + 1)
        else:
            return val

    def read_mpu6050(self):
        # Read Accelerometer raw value
        acc_x = self.read_i2c_word(ACCEL_XOUT_H)
        acc_y = self.read_i2c_word(ACCEL_YOUT_H)
        acc_z = self.read_i2c_word(ACCEL_ZOUT_H)

        # Read Gyroscope raw value
        gyro_x = self.read_i2c_word(GYRO_XOUT_H)
        gyro_y = self.read_i2c_word(GYRO_YOUT_H)
        gyro_z = self.read_i2c_word(GYRO_ZOUT_H)

        # Create Imu message
        imu_msg = Imu()
        imu_msg.header.stamp = self.get_clock().now().to_msg()
        imu_msg.header.frame_id = "imu_link"
        
        # Populate message fields with raw data - conversion to actual values is required
        imu_msg.linear_acceleration.x = acc_x
        imu_msg.linear_acceleration.y = acc_y
        imu_msg.linear_acceleration.z = acc_z
        imu_msg.angular_velocity.x = gyro_x
        imu_msg.angular_velocity.y = gyro_y
        imu_msg.angular_velocity.z = gyro_z

        # Publish the message
        self.publisher_.publish(imu_msg)
        self.get_logger().info('Publishing IMU Data')

def main(args=None):
    rclpy.init(args=args)
    node = MPU6050Node()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
