#define BOOST_TEST_MODULE InexactAddersTests
#include <boost/test/unit_test.hpp>

#include "inexact_adders.h"

BOOST_AUTO_TEST_CASE(FailTest)
{
    BOOST_CHECK_EQUAL(InAx1_adder(0,0,0), 0);
}

BOOST_AUTO_TEST_CASE(PassTest)
{
    BOOST_CHECK_EQUAL(4, 4);
}