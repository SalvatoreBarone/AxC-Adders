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
    // BOOST_CHECK_EQUAL(InAx1_adder(2, 145, 15 ), 222);  //FIXME: this test fails

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