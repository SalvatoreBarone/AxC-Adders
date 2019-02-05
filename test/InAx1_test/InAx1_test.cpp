//
// AxC Adders - A collection of inexact adders for model-driven development
// Copyright (C) 2019 Andrea Aletto <andrea.aletto8@gmail.com>
//
// This file is part of AxC Adders.
//
// AxC Adders is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// AxC Adders is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with AxC Adders.  If not, see <http://www.gnu.org/licenses/>.
//

/******************************************************************************
 * @file   InAx1_test.cpp
 * @author Andrea Aletto
 * @date   30 gen 2019
 * @brief  Test suite for InAx1 hardware cell
 ******************************************************************************/

#define BOOST_TEST_MODULE InAx1_test
#include <boost/test/unit_test.hpp>
#include <climits>
#include <iostream>
using namespace std;

#include "inexact_adders.h"

/************* InAx ADDERS *************/

BOOST_AUTO_TEST_CASE(InAx1_exact_sum)
{    
    // exact sum
    BOOST_CHECK_EQUAL(InAx1_adder(0,0,0), 0);
    BOOST_CHECK_EQUAL(InAx1_adder(0,0,1), 1);
    BOOST_CHECK_EQUAL(InAx1_adder(0,1,0), 1);
    BOOST_CHECK_EQUAL(InAx1_adder(0,1,1), 2);
}

BOOST_AUTO_TEST_CASE(InAx1_inexact_cell)
{
    // inexact cell c_in=0
    BOOST_CHECK_EQUAL(InAx1_adder(1,0,0), 0);
    BOOST_CHECK_EQUAL(InAx1_adder(1,0,1), 1);
    BOOST_CHECK_EQUAL(InAx1_adder(1,1,0), 1);
    BOOST_CHECK_EQUAL(InAx1_adder(1,1,1), 0);

    // inexact cell c_in=1
    BOOST_CHECK_EQUAL(InAx1_adder(2,1,1), 0);
    BOOST_CHECK_EQUAL(InAx1_adder(2,5,3), 6);
    BOOST_CHECK_EQUAL(InAx1_adder(2,3,5), 6);
    BOOST_CHECK_EQUAL(InAx1_adder(2,3,3), 0);

}

BOOST_AUTO_TEST_CASE(InAx1_sys)
{
    BOOST_CHECK_EQUAL(InAx1_adder(3,23,21), 34);
}