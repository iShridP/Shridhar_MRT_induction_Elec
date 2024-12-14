import os
from glob import glob 

from setuptools import find_packages, setup #build tool is setuptools

package_name = 'sauron'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', 'pubsub.launch.py'))),
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'], #ament_python uses setuptools as its build tool.
    zip_safe=True,
    maintainer='shridhar',
    maintainer_email='shridhar@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'publisher1=sauron.publisher1:main',
            'publisher2=sauron.publisher2:main',
            'listener=sauron.listener:main',
        ],
    },
)
