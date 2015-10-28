#include "main.cpp"
#include "tinytest.h"

int testDollarToEuro()
{
    DollarToEuroConverter decon{};
    TINYTEST_ASSERT(decon.convert(1000) == 910);
}
