import os
from glob import glob
from setuptools import setup

package_name = 'underwater_control'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), 
         glob('launch/*.launch.py')),
        (os.path.join('share', package_name, 'config'), 
         glob('config/*.yaml')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    entry_points={
        'console_scripts': [
            'camera_publisher = underwater_control.camera_publisher:main',
            'image_processor = underwater_control.image_processor:main',
            'control_client = underwater_control.control_client:main',
            'serial_comm_node = underwater_control.serial_comm_node:main',
        ],
    },
)