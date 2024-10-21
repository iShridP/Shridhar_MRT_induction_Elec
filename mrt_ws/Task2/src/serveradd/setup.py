from setuptools import find_packages, setup

package_name = 'serveradd'

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
    description='MRT example server',
    license='MRT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'client = serveradd.clientnode:main',
                'service = serveradd.servicenode:main',
            ],
    },
)
