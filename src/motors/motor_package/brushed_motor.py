#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16, Bool

class BrushedMotorController(Node):

    def __init__(self):
        super().__init__('brushed_motor_controller')
        self.pwm_value = 0  # Range: 0 to 100
        self.direction = True  # True: Forward, False: Reverse

        # TODO: Setup your PWM and GPIO pins here for speed and direction control

        self.speed_subscription = self.create_subscription(
            Int16,
            'motor_speed',
            self.set_speed_callback,
            10)
        
        self.direction_subscription = self.create_subscription(
            Bool,
            'motor_direction',
            self.set_direction_callback,
            10)
        
        self.stop_subscription = self.create_subscription(
            Bool,
            'motor_stop',
            self.stop_motor_callback,
            10)

    def set_speed_callback(self, msg):
        self.pwm_value = msg.data
        # TODO: Send PWM signal to motor driver here for speed control

    def set_direction_callback(self, msg):
        self.direction = msg.data
        # TODO: Set GPIO pin HIGH or LOW based on self.direction for direction control

    def stop_motor_callback(self, msg):
        if msg.data:  # If the message is True
            self.pwm_value = 0
            # TODO: Stop the motor (either set PWM to 0 or utilize braking functionality if your driver supports it)

def main(args=None):
    rclpy.init(args=args)
    motor_controller = BrushedMotorController()
    rclpy.spin(motor_controller)
    motor_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
