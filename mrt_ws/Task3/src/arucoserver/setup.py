from setuptools import find_packages, setup

package_name = 'arucoserver'

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
    maintainer='shridhar',
    maintainer_email='Shridhar.g.patil1@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'service = arucoserver.service:main',
            'imageclient = arucoserver.image_client:main',
            'videoclient = arucoserver.video_client:main',
            'webcamclient = arucoserver.webcam_client:main',
        ],
    },
)
