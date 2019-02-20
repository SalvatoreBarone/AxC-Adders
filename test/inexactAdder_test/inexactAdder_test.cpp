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
 * @file   inexactAdder_test.cpp
 * @author Andrea Aletto
 * @date   13 feb 2019
 * @brief  Test suite for inexactAdder function
 ******************************************************************************/

#define BOOST_TEST_MODULE inexactAdder_test
#include <boost/test/unit_test.hpp>
#include <climits>
#include <iostream>
using namespace std;

#include "inexact_adders.h"

BOOST_AUTO_TEST_CASE(inexactAdder_exact_sum)
{    
    /* InAx1 */
    BOOST_CHECK_EQUAL(inexactAdder(0,0,0,0, InAx1), 0);
    BOOST_CHECK_EQUAL(inexactAdder(0,0,1,0, InAx1), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,0,0, InAx1), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,1,0, InAx1), 2);

    /* InAx2 */
    BOOST_CHECK_EQUAL(inexactAdder(0,0,0,0, InAx2), 0);
    BOOST_CHECK_EQUAL(inexactAdder(0,0,1,0, InAx2), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,0,0, InAx2), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,1,0, InAx2), 2);

    /* InAx3 */
    BOOST_CHECK_EQUAL(inexactAdder(0,0,0,0, InAx3), 0);
    BOOST_CHECK_EQUAL(inexactAdder(0,0,1,0, InAx3), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,0,0, InAx3), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,1,0, InAx3), 2);

    /* AMA1 */
    BOOST_CHECK_EQUAL(inexactAdder(0,0,0,0, AMA1), 0);
    BOOST_CHECK_EQUAL(inexactAdder(0,0,1,0, AMA1), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,0,0, AMA1), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,1,0, AMA1), 2);

    /* AMA2 */
    BOOST_CHECK_EQUAL(inexactAdder(0,0,0,0, AMA2), 0);
    BOOST_CHECK_EQUAL(inexactAdder(0,0,1,0, AMA2), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,0,0, AMA2), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,1,0, AMA2), 2);

    /* AMA3 */
    BOOST_CHECK_EQUAL(inexactAdder(0,0,0,0, AMA3), 0);
    BOOST_CHECK_EQUAL(inexactAdder(0,0,1,0, AMA3), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,0,0, AMA3), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,1,0, AMA3), 2);

    /* AMA4 */
    BOOST_CHECK_EQUAL(inexactAdder(0,0,0,0, AMA4), 0);
    BOOST_CHECK_EQUAL(inexactAdder(0,0,1,0, AMA4), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,0,0, AMA4), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,1,0, AMA4), 2);

    /* AXA1 */
    BOOST_CHECK_EQUAL(inexactAdder(0,0,0,0, AXA1), 0);
    BOOST_CHECK_EQUAL(inexactAdder(0,0,1,0, AXA1), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,0,0, AXA1), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,1,0, AXA1), 2);

    /* AXA2 */
    BOOST_CHECK_EQUAL(inexactAdder(0,0,0,0, AXA2), 0);
    BOOST_CHECK_EQUAL(inexactAdder(0,0,1,0, AXA2), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,0,0, AXA2), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,1,0, AXA2), 2);

    /* AXA3 */
    BOOST_CHECK_EQUAL(inexactAdder(0,0,0,0, AXA3), 0);
    BOOST_CHECK_EQUAL(inexactAdder(0,0,1,0, AXA3), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,0,0, AXA3), 1);
    BOOST_CHECK_EQUAL(inexactAdder(0,1,1,0, AXA3), 2);
}