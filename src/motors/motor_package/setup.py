from setuptools import find_packages, setup

package_name = 'motor_package'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='winsonl8',
    maintainer_email='wl85@rice.edu',
    description='Control for a BLDC Motor',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
    'console_scripts': [
        'bldc_motor = motor_package.bldc_motor:main',
        'brushed_motor = motor_package.brushed_motor:main',
        'servo_motor = motor_package.servo_motor:main',
    ],
},
)
