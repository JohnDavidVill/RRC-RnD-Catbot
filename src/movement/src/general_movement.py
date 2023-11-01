import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
from sensor_msgs.msg import Joy

class QuadrupedController(Node):
    def __init__(self):
        super().__init__('quadruped_controller')
        # Publisher for joint commands
        self.joint_command_publisher = self.create_publisher(Float64MultiArray, 'joint_commands', 10)
        # Subscriber for joystick/controller inputs
        self.joy_subscriber = self.create_subscription(Joy, 'joy', self.joy_callback, 10)
        # Placeholder for joint commands
        self.joint_commands = Float64MultiArray()
        self.joint_commands.data = [0.0]*12  # Initializing with zeros for 12 joints

    def joy_callback(self, data):
        # Assuming two buttons: one to start walking and one to stop the robot
        start_button_idx = 0
        stop_button_idx = 1
        if data.buttons[start_button_idx] == 1:
            self.start_walking_sequence()
        elif data.buttons[stop_button_idx] == 1:
            self.stop_robot()
        
    def move_leg(self, leg, step_size):
        """
        Placeholder function to move a specific leg.
        leg: str type that can be 'right_rear', 'right_front', 'left_rear', or 'left_front'
        step_size: float type that indicates how much to move the leg
        """
        # This function can be expanded based on specific specs of the catbot
        if leg == 'right_rear':
            # Modify joint commands for right rear leg
            pass
        elif leg == 'right_front':
            # Modify joint commands for right front leg
            pass
        elif leg == 'left_rear':
            # Modify joint commands for left rear leg
            pass
        elif leg == 'left_front':
            # Modify joint commands for left front leg
            pass
        
        # Publishing joint commands after modifying
        self.joint_command_publisher.publish(self.joint_commands)
        rclpy.sleep(0.5)  # Pause to give time for the leg to move. Can be adjusted later

    def start_walking_sequence(self):
        step_size = 1.0  # Placeholder, adjust as needed
        sequence = ['right_rear', 'right_front', 'left_rear', 'left_front']
        for leg in sequence:
            self.move_leg(leg, step_size)
        
    def stop_robot(self):
        # Set all joint commands to a safe posture
        self.joint_commands.data = [0.0]*12
        self.joint_command_publisher.publish(self.joint_commands)

def main():
    rclpy.init()
    controller = QuadrupedController()
    rclpy.spin(controller)

    controller.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()