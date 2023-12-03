from setuptools import find_packages
from setuptools import setup

setup(
    name='wheelchair_interfaces',
    version='1.0.0',
    packages=find_packages(
        include=('wheelchair_interfaces', 'wheelchair_interfaces.*')),
)
