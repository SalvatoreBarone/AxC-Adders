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
 * @file   test.cpp
 * @author Andrea Aletto
 * @date   30 gen 2019
 * @brief  Test suite for InexactAdders static library
 ******************************************************************************/

#define BOOST_TEST_MODULE InexactAddersTests
#include <boost/test/unit_test.hpp>
#include <climits>
#include <iostream>
using namespace std;

#include "inexact_adders.h"

/************* InAx ADDERS *************/

BOOST_AUTO_TEST_CASE(InAx1)
{    
    // exact sum
    BOOST_CHECK_EQUAL(InAx1_adder(0,0,0), 0);
    BOOST_CHECK_EQUAL(InAx1_adder(0,0,1), 1);
    BOOST_CHECK_EQUAL(InAx1_adder(0,1,0), 1);
    BOOST_CHECK_EQUAL(InAx1_adder(0,1,1), 2);

    // inexact cell
    BOOST_CHECK_EQUAL(InAx1_adder(1,0,0), 0);
    BOOST_CHECK_EQUAL(InAx1_adder(1,0,1), 1);
    BOOST_CHECK_EQUAL(InAx1_adder(1,1,0), 1);
    BOOST_CHECK_EQUAL(InAx1_adder(1,1,1), 0);

    // some random sums
    BOOST_CHECK_EQUAL(InAx1_adder(2, 10,  10 ), 16 );
    BOOST_CHECK_EQUAL(InAx1_adder(2, 13,  4  ), 17 );
    BOOST_CHECK_EQUAL(InAx1_adder(2, 9,   9  ), 16 );
    BOOST_CHECK_EQUAL(InAx1_adder(2, 145, 15 ), 158);

}

BOOST_AUTO_TEST_CASE(InAx2)
{
    // exact sum
    BOOST_CHECK_EQUAL(InAx2_adder(0,0,0), 0);
    BOOST_CHECK_EQUAL(InAx2_adder(0,0,1), 1);
    BOOST_CHECK_EQUAL(InAx2_adder(0,1,0), 1);
    BOOST_CHECK_EQUAL(InAx2_adder(0,1,1), 2);
}

BOOST_AUTO_TEST_CASE(InAx3)
{
    // exact sum
    BOOST_CHECK_EQUAL(InAx3_adder(0,0,0), 0);
    BOOST_CHECK_EQUAL(InAx3_adder(0,0,1), 1);
    BOOST_CHECK_EQUAL(InAx3_adder(0,1,0), 1);
    BOOST_CHECK_EQUAL(InAx3_adder(0,1,1), 2);
}


/************* AXA ADDERS *************/

BOOST_AUTO_TEST_CASE(AXA1)
{
    // exact sum
    BOOST_CHECK_EQUAL(AXA1_adder(0,0,0), 0);
    BOOST_CHECK_EQUAL(AXA1_adder(0,0,1), 1);
    BOOST_CHECK_EQUAL(AXA1_adder(0,1,0), 1);
    BOOST_CHECK_EQUAL(AXA1_adder(0,1,1), 2);
}

BOOST_AUTO_TEST_CASE(AXA2)
{
    // exact sum
    BOOST_CHECK_EQUAL(AXA2_adder(0,0,0), 0);
    BOOST_CHECK_EQUAL(AXA2_adder(0,0,1), 1);
    BOOST_CHECK_EQUAL(AXA2_adder(0,1,0), 1);
    BOOST_CHECK_EQUAL(AXA2_adder(0,1,1), 2);
}

BOOST_AUTO_TEST_CASE(AXA3)
{
    // exact sum
    BOOST_CHECK_EQUAL(AXA3_adder(0,0,0), 0);
    BOOST_CHECK_EQUAL(AXA3_adder(0,0,1), 1);
    BOOST_CHECK_EQUAL(AXA3_adder(0,1,0), 1);
    BOOST_CHECK_EQUAL(AXA3_adder(0,1,1), 2);
}


/************* AMA ADDERS *************/

BOOST_AUTO_TEST_CASE(AMA1)
{
    // exact sum
    BOOST_CHECK_EQUAL(AMA1_adder(0,0,0), 0);
    BOOST_CHECK_EQUAL(AMA1_adder(0,0,1), 1);
    BOOST_CHECK_EQUAL(AMA1_adder(0,1,0), 1);
    BOOST_CHECK_EQUAL(AMA1_adder(0,1,1), 2);
}

BOOST_AUTO_TEST_CASE(AMA2)
{
    // exact sum
    BOOST_CHECK_EQUAL(AMA2_adder(0,0,0), 0);
    BOOST_CHECK_EQUAL(AMA2_adder(0,0,1), 1);
    BOOST_CHECK_EQUAL(AMA2_adder(0,1,0), 1);
    BOOST_CHECK_EQUAL(AMA2_adder(0,1,1), 2);
}

BOOST_AUTO_TEST_CASE(AMA3)
{
    // exact sum
    BOOST_CHECK_EQUAL(AMA3_adder(0,0,0), 0);
    BOOST_CHECK_EQUAL(AMA3_adder(0,0,1), 1);
    BOOST_CHECK_EQUAL(AMA3_adder(0,1,0), 1);
    BOOST_CHECK_EQUAL(AMA3_adder(0,1,1), 2);
}

BOOST_AUTO_TEST_CASE(AMA4)
{
    // exact sum
    BOOST_CHECK_EQUAL(AMA4_adder(0,0,0), 0);
    BOOST_CHECK_EQUAL(AMA4_adder(0,0,1), 1);
    BOOST_CHECK_EQUAL(AMA4_adder(0,1,0), 1);
    BOOST_CHECK_EQUAL(AMA4_adder(0,1,1), 2);
}