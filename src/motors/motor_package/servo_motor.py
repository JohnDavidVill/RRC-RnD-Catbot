#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16

class ServoMotorController(Node):

    def __init__(self):
        super().__init__('servo_motor_controller')
        self.angle = 0  # Range: typically 0 to 180 degrees, but can vary based on servo specifications

        # TODO: Setup your PWM pin here for servo control

        self.angle_subscription = self.create_subscription(
            Int16,
            'servo_angle',
            self.set_angle_callback,
            10)

    def set_angle_callback(self, msg):
        self.angle = msg.data
        # Convert angle to PWM pulse width
        # Typically:
        # - 0 degrees corresponds to 1ms pulse width
        # - 180 degrees corresponds to 2ms pulse width
        # TODO: adapt the values below based on servo's specifications
        pulse_width = 1.0 + (self.angle / 180.0)
        
        # TODO: Send PWM signal to servo motor here

def main(args=None):
    rclpy.init(args=args)
    servo_controller = ServoMotorController()
    rclpy.spin(servo_controller)
    servo_controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
