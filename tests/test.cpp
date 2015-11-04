#include "tinytest.h"
#include "../DollarToEuroConverter.hpp"

int testDollarToEuro()
{
    DollarToEuroConverter decon{};
    TINYTEST_ASSERT(decon.convert(1000) == 910);

    return 1;
}

TINYTEST_START_SUITE(Convert);

TINYTEST_ADD_TEST(testDollarToEuro);

TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(Convert);
