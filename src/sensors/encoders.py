#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import RPi.GPIO as GPIO

class EncoderNode(Node):
    def __init__(self):
        super().__init__('encoder_node')
        self.clk = 17  # GPIO pin for the CLK pin on the encoder
        self.dt = 18   # GPIO pin for the DT pin on the encoder
        self.sw = 27   # GPIO pin for the SW pin on the encoder (if you're using the button)

        # Set up the GPIO pins
        GPIO.setmode(GPIO.BCM)
        GPIO.setup(self.clk, GPIO.IN, pull_up_down=GPIO.PUD_UP)
        GPIO.setup(self.dt, GPIO.IN, pull_up_down=GPIO.PUD_UP)
        GPIO.setup(self.sw, GPIO.IN, pull_up_down=GPIO.PUD_UP)

        # Variables to keep track of the state
        self.counter = 0
        self.clkLastState = GPIO.input(self.clk)

        # Timer to read the encoder value
        self.create_timer(0.01, self.read_encoder)  # Adjust the timer rate as needed

    def read_encoder(self):
        clkState = GPIO.input(self.clk)
        dtState = GPIO.input(self.dt)

        if clkState != self.clkLastState:
            if dtState != clkState:
                self.counter += 1
            else:
                self.counter -= 1

            self.get_logger().info('Counter: %d' % self.counter)

        self.clkLastState = clkState

        # Uncomment if we want to use the button switch as well
        # if not GPIO.input(self.sw):  # If button is pressed
        #     self.get_logger().info('Button Pressed!')
        #     self.counter = 0  # Reset counter or other action

def main(args=None):
    rclpy.init(args=args)
    encoder_node = EncoderNode()
    rclpy.spin(encoder_node)
    encoder_node.destroy_node()
    rclpy.shutdown()
    GPIO.cleanup()

if __name__ == '__main__':
    main()
