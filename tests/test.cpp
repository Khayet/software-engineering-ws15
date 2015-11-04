#include "tinytest.h"
#include "../DollarToEuroConverter.hpp"
#include "../EuroToDollarConverter.hpp"
#include <iostream>

//Kurs 0.91
int testDollarToEuro01()
{
    DollarToEuroConverter decon{};
    TINYTEST_EQUAL_EPSILON(decon.convert(1000.0), 910.0);
    TINYTEST_EQUAL_EPSILON(decon.convert(4.0), 3.64);
    TINYTEST_EQUAL_EPSILON(decon.convert(674.0), 613.34);

    return 1;
}

int testDollarToEuro02()
{
    DollarToEuroConverter decon{};
    TINYTEST_EQUAL_EPSILON(decon.convert(777), 707.07);
    TINYTEST_EQUAL_EPSILON(decon.convert(0.2), 0.182);
    TINYTEST_EQUAL_EPSILON(decon.convert(261.551), 238.01141);

    return 1;
}

int testDollarToEuro03()
{
    DollarToEuroConverter decon{};
    TINYTEST_EQUAL_EPSILON(decon.convert(0.0), 0.0);
    TINYTEST_EQUAL_EPSILON(decon.convert(1.0), 0.91);
    TINYTEST_EQUAL_EPSILON(decon.convert(-1.0), -0.91);

    return 1;
}

//Kurs 1.09
int testEuroToDollar01()
{
    EuroToDollarConverter eucon{};
    TINYTEST_EQUAL_EPSILON(eucon.convert(10), 10.9);
    TINYTEST_EQUAL_EPSILON(eucon.convert(55), 59.95);
    TINYTEST_EQUAL_EPSILON(eucon.convert(284), 309.56);

    return 1;
}

int testEuroToDollar02()
{
    EuroToDollarConverter eucon{};
    TINYTEST_EQUAL_EPSILON(eucon.convert(0.55), 0.5995);
    TINYTEST_EQUAL_EPSILON(eucon.convert(1.09), 1.1881);
    TINYTEST_EQUAL_EPSILON(eucon.convert(18.72), 20.4048);

    return 1;
}

int testEuroToDollar03()
{
    EuroToDollarConverter eucon{};
    TINYTEST_EQUAL_EPSILON(eucon.convert(0.0), 0.0);
    TINYTEST_EQUAL_EPSILON(eucon.convert(1.0), 1.09);
    TINYTEST_EQUAL_EPSILON(eucon.convert(-1.0), -1.09);

    return 1;
}

int testFahrenheitToCelsius01()
{
    FahrenheitToCelsiusConverter fahcon{};
    TINYTEST_EQUAL_EPSILON(fahcon.convert(32), 0.0);
    TINYTEST_EQUAL_EPSILON(fahcon.convert(50), 10.0);
    TINYTEST_EQUAL_EPSILON(fahcon.convert(25), -3.88889);

    return 1;
}

int testFahrenheitToCelsius02()
{
    FahrenheitToCelsiusConverter fahcon{};
    TINYTEST_EQUAL_EPSILON(fahcon.convert(21.2), -6);
    TINYTEST_EQUAL_EPSILON(fahcon.convert(-4.0), -20);
    TINYTEST_EQUAL_EPSILON(fahcon.convert(-8.45), -22.47222);

    return 1;
}

int testFahrenheitToCelsius03()
{
    FahrenheitToCelsiusConverter fahcon{};
    TINYTEST_EQUAL_EPSILON(fahcon.convert(0.0), -17.7778);
    TINYTEST_EQUAL_EPSILON(fahcon.convert(1.0), -17.2222);
    TINYTEST_EQUAL_EPSILON(fahcon.convert(-1.0), -18.3333);

    return 1;
}

int testCelsiusToFahrenheit01()
{
    CelsiusToFahrenheitConverter celcon{};
    TINYTEST_EQUAL_EPSILON(celcon.convert( ), );
    TINYTEST_EQUAL_EPSILON(celcon.convert( ), );
    TINYTEST_EQUAL_EPSILON(celcon.convert( ), );

    return 1;
}

int testCelsiusToFahrenheit02()
{
    CelsiusToFahrenheitConverter celcon{};
    TINYTEST_EQUAL_EPSILON(celcon.convert( ), );
    TINYTEST_EQUAL_EPSILON(celcon.convert( ), );
    TINYTEST_EQUAL_EPSILON(celcon.convert( ), );

    return 1;
}

int testCelsiusToFahrenheit03()
{
    CelsiusToFahrenheitConverter celcon{};
    TINYTEST_EQUAL_EPSILON(celcon.convert(0.0), 32.0);
    TINYTEST_EQUAL_EPSILON(celcon.convert(1.0), 33.8);
    TINYTEST_EQUAL_EPSILON(celcon.convert(-1.0), 30.2);

    return 1;
}

TINYTEST_START_SUITE(Convert);

TINYTEST_ADD_TEST(testDollarToEuro01);
TINYTEST_ADD_TEST(testDollarToEuro02);
TINYTEST_ADD_TEST(testDollarToEuro03);

TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(Convert);
