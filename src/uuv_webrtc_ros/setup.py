from setuptools import setup

package_name = 'uuv_webrtc_ros'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
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
            'yolov5_detector = uuv_webrtc_ros.yolov5_detector:main',
        ],
    },
)
