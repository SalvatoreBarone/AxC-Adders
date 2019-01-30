# AxC Adders
[![Build Status](https://travis-ci.org/andreaaletto/AxC-Adders.svg?branch=master)](https://travis-ci.org/andreaaletto/AxC-Adders) [![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0) ![Code Coverage](https://img.shields.io/codecov/c/gh/andreaaletto/AxC-Adders.svg?branch=testing)

AxC Adders is a collection of inexact adders for model-driven development, provided as a C++ static library. 

## Build and install

In order to build **AxC-Adders** from source you will need an installation of _gcc/g++_, _cmake_ and a build system (_ninja-build_ is recommended). 
Clone the repo, then run _cmake_ in a different folder, finally build it with your preferred build system: 
```
$ git clone https://github.com/andreaaletto/AxC-Adders.git adders && cd adders
$ mkdir build && cd build
$ cmake .. -G Ninja
$ ninja && sudo ninja install
```

At the end of the process, you will find:
* the _static library_ in ```/usr/lib/libInexactAdders.a```;
* the relative _header file_ in ```/usr/include/inexact_adders.h```.

### Quick Start
--------
To use the inexact addition, include the header file in your source file, then use one of its functions. Currently this project supports the model of the following inexact hardware cells:
* [InAx1](https://ieeexplore.ieee.org/abstract/document/7459392)
* [InAx2](https://ieeexplore.ieee.org/abstract/document/7459392)
* [InAx3](https://ieeexplore.ieee.org/abstract/document/7459392)
* [AMA1](https://ieeexplore.ieee.org/abstract/document/6387646)
* [AMA2](https://ieeexplore.ieee.org/abstract/document/6387646)
* [AMA3](https://ieeexplore.ieee.org/abstract/document/6387646)
* [AMA4](https://ieeexplore.ieee.org/abstract/document/6387646)
* [AXA1](https://ieeexplore.ieee.org/abstract/document/6720793)
* [AXA2](https://ieeexplore.ieee.org/abstract/document/6720793)
* [AXA3](https://ieeexplore.ieee.org/abstract/document/6720793)

All the sum functions provide a parameter called ```NAB``` that stands for **N**umber of **A**proximate **B**its and represents the number of the least significant bits that are computed with the chosen inexact adder cell. 
Note that the remaining ```n-NAB``` digits are computed as an exact sum.

The input operands are of type ```int``` and are managed as **32-bits unsigned integer numbers**.

#### LICENSE
--------

* [GPLV3.0](https://www.gnu.org/licenses/licenses.html)

#### Contributing
----------

Github is for social coding: if you want to write code, I encourage contributions through pull requests from forks of this repository. 
