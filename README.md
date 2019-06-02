# AxC Adders
[![Build Status](https://travis-ci.org/andreaaletto/AxC-Adders.svg?branch=master)](https://travis-ci.org/andreaaletto/AxC-Adders) [![codecov](https://codecov.io/gh/andreaaletto/AxC-Adders/branch/master/graph/badge.svg)](https://codecov.io/gh/andreaaletto/AxC-Adders) [![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0) 

This repo is part of the thesis activity ***Reconfigurable hardware designs: analysis and implementation of approximate JPEG compression variants*** by [Andrea Aletto](https://www.linkedin.com/in/andrea-aletto)

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

The input operands are of type ```int``` and are managed as **32-bits signed integer numbers**.

### Test the library
--------
An automated test suite is provided with the library source, based on __boost library__. Read this section to understand how to run the automated tests.
First of all, you need to install boost components, assuming you're running a Debian based Linux distro, run the following command:
```
sudo apt-get install libboost-test-dev libboost-system-dev libboost-filesystem-dev
```

Now build the library and run _ctest_:
```
$ mkdir build && cd build
$ cmake .. -G Ninja
$ ninja && sudo ninja install
$ ctest ..
```

To see what tests are been implemented, please refer to ```test/test.cpp``` file.
 
### Extend the library
--------
This library is implemented to be extended by adding new hardware cell models. In order to do this, you need the implement the following steps.

#### Choose your adder signature
Open the file ```inexact_adders.h``` and add a new function declaration, that will be available outside of the library. 
E.g. ```int MyCell_adder(int nab, int first_operand, int second_operand, bool isSub)```

#### Define your model
Create a new _cpp_ file into ```src``` folder. In this file you have to include ```inexact_adders_core.h``` and ```inexact_adders.h```. Now you have to implement the model of your hardware cell declaring the following two functions:
* Sum function - ```bool MyCell_sum(const bool &a, const bool &b, const bool &cin)```
* Carry function - ```bool MyCell_carry(const bool &a, const bool &b, const bool &cin)```

Finally implement the function declared in the step 1. Be sure of using the ```generic_adder``` function, by passing to it:
* the number of approximate bits, 
* the two operands, 
* a pointer to sum function, 
* a pointer to carry function,
* a boolean value, indicating if the operation is a sub (```true```) or an add (```false```).

An implementation could be the following:
```
int MyCell_adder(int nab, int first_operand, int second_operand, bool isSub )
{
	return generic_adder(
		nab, 
		first_operand, 
		second_operand, 
		MyCell_sum,
		MyCell_carry,
		isSub
	);
}
```

#### Prepare your cell for build phase
Finally, you have to add the newly created _cpp_ file to ```src/CMakeLists.txt``` in the ```add_library``` directive, at the end of the _cpp_ file list.

```
add_library(InexactAdders STATIC 
        core/ExactFullAdder.cpp
        core/generic_adder.cpp
        InAx1_adder.cpp 
        InAx2_adder.cpp 
        InAx3_adder.cpp
        AMA1_adder.cpp
        AMA2_adder.cpp
        AMA3_adder.cpp
        AMA4_adder.cpp
        AXA1_adder.cpp
        AXA2_adder.cpp
        AXA3_adder.cpp
        
        MyCell.cpp
)
```
Now, you can build and install the version of InexactAdders library that includes your custom hardware cell.


#### LICENSE
--------

* [GPLV3.0](https://www.gnu.org/licenses/licenses.html)

#### Contributing
----------

Github is for social coding: if you want to write code, I encourage contributions through pull requests from forks of this repository. 
