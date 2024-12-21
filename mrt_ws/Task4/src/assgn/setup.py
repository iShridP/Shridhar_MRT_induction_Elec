from setuptools import find_packages, setup

package_name = 'assgn'

import os
from glob import glob

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        (os.path.join('share', package_name, 'worlds'), glob(os.path.join('worlds', 'mrs_hudson_arena.sdf'))),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', 'mrs_hudson_world.launch.py'))),
        (os.path.join('share', package_name, 'models'), glob(os.path.join('models', 'mrs_hudson.urdf'))),
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
            '96 = assgn.96:main',
        ],
    },
)
