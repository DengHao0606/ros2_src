from setuptools import setup
import os
from glob import glob

package_name = 'uuv_webrtc_ros'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools', 'ultralytics>=8.0.0'],
    zip_safe=True,
    maintainer='dh',
    maintainer_email='3285391919@qq.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'image_publisher = uuv_webrtc_ros.image_publisher:main',
            'image_subscriber = uuv_webrtc_ros.image_subscriber:main',
            'yolov11_detector = uuv_webrtc_ros.yolov11_detector:main',
        ],
    },
)
