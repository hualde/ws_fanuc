from setuptools import find_packages
from setuptools import setup

setup(
    name='fanuc_msgs',
    version='1.1.1',
    packages=find_packages(
        include=('fanuc_msgs', 'fanuc_msgs.*')),
)
