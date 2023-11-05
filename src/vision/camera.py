import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np
import os

# TODO: The actual parameters for the stereo camera setup, these are placeholders
min_disp = 0  # the minimum disparity (pixel difference between left and right image)
num_disp = 64  # the number of disparity levels to consider

class VisionDepthNode(Node):
    def __init__(self):
        super().__init__('vision_depth_node')
        self.bridge = CvBridge()

        # Subscribers for the left and right camera images
        self.left_image_sub = self.create_subscription(
            Image,
            'camera/left/image_raw',
            self.left_image_callback,
            10)
        self.right_image_sub = self.create_subscription(
            Image,
            'camera/right/image_raw',
            self.right_image_callback,
            10)

        # For each pixel in the left image, the algorithm takes a block of pixels around that point (defined
        # by blockSize).
        # It then searches within a range (defined by numDisparities) in the corresponding row of the right 
        # image to find a block with the most similar appearance.
        # The horizontal shift (disparity) that yields the best match is stored in a disparity map, which 
        # encodes the apparent motion of points due to the different perspectives of the two cameras.
        self.stereo = cv2.StereoBM_create(numDisparities=16, blockSize=15)

        # Placeholder for the left and right images
        self.left_image = None
        self.right_image = None

        # Check if the cameras are calibrated
        self.check_calibration()

        def check_calibration(self):
        # replace "left_camera_calibration.yaml" and "right_camera_calibration.yaml" with the actual paths to calibration files
            calibration_files = ["left_camera_calibration.yaml", "right_camera_calibration.yaml"]
            for calibration_file in calibration_files:
                if not os.path.isfile(calibration_file):
                    self.get_logger().warn(f"Calibration file '{calibration_file}' not found. Please calibrate the cameras first.")
                    # Here we can either continue with a warning, or shutdown if calibration is mandatory
                    # rclpy.shutdown()

    def left_image_callback(self, msg):
        # Convert ROS Image message to OpenCV image for the left camera
        self.left_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

    def right_image_callback(self, msg):
        # Convert ROS Image message to OpenCV image for the right camera
        self.right_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')

        # Check if we have both images
        if self.left_image is not None and self.right_image is not None:
            # Compute the disparity map
            gray_left = cv2.cvtColor(self.left_image, cv2.COLOR_BGR2GRAY)
            gray_right = cv2.cvtColor(self.right_image, cv2.COLOR_BGR2GRAY)
            disparity = self.stereo.compute(gray_left, gray_right).astype(np.float32) / 16.0

            # Display the disparity map (for visualization purposes)
            cv2.imshow('Disparity', (disparity / 16.0 + min_disp) / num_disp)
            cv2.waitKey(1)

            # TODO: We cannot calculate depth without more information on camera specs
            # The equation to calculate depth (Z) is (f * B) / d
            # Where f is focal length of camera (in pixels)
            # B is baseline or the distance between the two cameras
            # and d is disparity (in pixels)

            # Clear the images after processing
            self.left_image = None
            self.right_image = None

def main(args=None):
    rclpy.init(args=args)
    vision_depth_node = VisionDepthNode()
    rclpy.spin(vision_depth_node)
    vision_depth_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()