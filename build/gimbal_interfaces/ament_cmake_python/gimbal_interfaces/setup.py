from setuptools import find_packages
from setuptools import setup

setup(
    name='gimbal_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('gimbal_interfaces', 'gimbal_interfaces.*')),
)
