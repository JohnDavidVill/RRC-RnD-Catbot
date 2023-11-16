#!/usr/bin/env python3

import RPi.GPIO as GPIO
import time

# Set the GPIO numbering mode
GPIO.setmode(GPIO.BCM)

# Set up a GPIO channel (replace 18 with whatever GPIO pin you're using)
ESC_GPIO_PIN = 18  # This pin will send the PWM signal to the ESC
GPIO.setup(ESC_GPIO_PIN, GPIO.OUT)

# Set the PWM frequency and initialize it
pwm_frequency = 50  # Typical PWM frequency for ESCs
pwm = GPIO.PWM(ESC_GPIO_PIN, pwm_frequency)
pwm.start(0)

# Helper function to set motor speed
def set_motor_speed(speed_percent):
    if speed_percent < 0 or speed_percent > 100:
        print("Invalid speed percent. Please choose a value between 0 and 100.")
        return

    # Map the speed percentage to the PWM duty cycle needed for the ESC
    # Note: These values should be calibrated for the  specific ESC
    duty_cycle = (speed_percent / 100.0) * (12.0 - 7.0) + 7.0
    pwm.ChangeDutyCycle(duty_cycle)

try:
    # Initialization: ESCs usually need to be initialized with a 0 (stop) signal
    set_motor_speed(0)
    print("Initializing ESC. Wait for 2 seconds.")
    time.sleep(2)

    # Example usage: Run the motor from 0% to 100% and back to 0%
    for speed in range(0, 101, 10):
        print(f"Setting speed to {speed}%")
        set_motor_speed(speed)
        time.sleep(1)

    for speed in range(100, -1, -10):
        print(f"Setting speed to {speed}%")
        set_motor_speed(speed)
        time.sleep(1)

    # Finally, stop the motor
    set_motor_speed(0)
    print("Stopping motor.")

except KeyboardInterrupt:
    # Graceful exit on Ctrl+C
    pass

# Clean up GPIO on normal exit
pwm.stop()
GPIO.cleanup()
