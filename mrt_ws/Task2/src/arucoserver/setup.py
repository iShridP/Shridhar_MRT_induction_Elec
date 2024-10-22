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
    description='serverAruco',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        	'service=arucoserver.service:main',
        	'testaruco=arucoserver.servicetest:main',
        	'videoaruco1 = arucoserver.videoserver1:main',
        	'videoaruco2 = arucoserver.videoserver2:main',
        	'webcam = arucoserver.webcam:capture_and_send_images',
        	'nonstopwebcam = arucoserver.nonstopwebcam:capture_and_send_images',
        ],
    },
)
