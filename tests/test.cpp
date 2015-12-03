#include "tinytest.h"
#include "../DollarToEuroConverter.hpp"
#include "../EuroToDollarConverter.hpp"
#include "../MilesToMetersConverter.hpp"
#include "../MetersToMilesConverter.hpp"
#include "../FahrenheitToCelsiusConverter.hpp"
#include "../CelsiusToFahrenheitConverter.hpp"
#include "../ConverterFactory.hpp"
#include <iostream>
#include <string>
#include <memory>

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
    TINYTEST_EQUAL_EPSILON(decon.convert(777.0), 707.07);
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
    TINYTEST_EQUAL_EPSILON(eucon.convert(10.0), 10.9);
    TINYTEST_EQUAL_EPSILON(eucon.convert(55.0), 59.95);
    TINYTEST_EQUAL_EPSILON(eucon.convert(284.0), 309.56);

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

int testMilesToMeters01()
{
  //conversion rate: 1:1609.34
  MilesToMetersConverter micon01;
  TINYTEST_EQUAL_EPSILON(micon01.convert(1.0), 1609.344);
  TINYTEST_EQUAL_EPSILON(micon01.convert(6475.0), 1.0421*10000000);
  TINYTEST_EQUAL_EPSILON(micon01.convert(22.0), 35405.6);

  return 1;
}

int testMilesToMeters02()
{
  MilesToMetersConverter micon02;
  TINYTEST_EQUAL_EPSILON(micon02.convert(-1.0), -1609.344);
  TINYTEST_EQUAL_EPSILON(micon02.convert(-0.0), 0.0);
  TINYTEST_EQUAL_EPSILON(micon02.convert(-6475.0), -1.0421*10000000);

  return 1;
}

int testMilesToMeters03()
{
  MilesToMetersConverter micon03;
  TINYTEST_EQUAL_EPSILON(micon03.convert(2.0), 3218.69);
  TINYTEST_EQUAL_EPSILON(micon03.convert(31.0), 49889.7);
  TINYTEST_EQUAL_EPSILON(micon03.convert(0.0), 0.0);


  return 1;
}

int testMetersToMiles01()
{
  //conversion rate: 1:0.000621371
  MetersToMilesConverter mecon01;
  TINYTEST_EQUAL_EPSILON(mecon01.convert(1.0), 0.000621371);
  TINYTEST_EQUAL_EPSILON(mecon01.convert(10000000.0), 6213.711922);
  TINYTEST_EQUAL_EPSILON(mecon01.convert(0.0), 0.0);

  return 1;
}

int testMetersToMiles02()
{
  MetersToMilesConverter mecon02;
  TINYTEST_EQUAL_EPSILON(mecon02.convert(-1.0), -0.000621371);
  TINYTEST_EQUAL_EPSILON(mecon02.convert(-10000000.0), -6213.711922);
  TINYTEST_EQUAL_EPSILON(mecon02.convert(-0.0), 0.0);

  return 1;
}

int testMetersToMiles03()
{
  MetersToMilesConverter mecon03;
  TINYTEST_EQUAL_EPSILON(mecon03.convert(22.0), 0.0136702);
  TINYTEST_EQUAL_EPSILON(mecon03.convert(1609.34), 1.0);
  TINYTEST_EQUAL_EPSILON(mecon03.convert(-1.0), -0.000621371);

  return 1;
}

int testFahrenheitToCelsius01()
{
    FahrenheitToCelsiusConverter fahcon01;
    TINYTEST_EQUAL_EPSILON(fahcon01.convert(32.0), 0.0);
    TINYTEST_EQUAL_EPSILON(fahcon01.convert(50.0), 10.0);
    TINYTEST_EQUAL_EPSILON(fahcon01.convert(25.0), -3.888889);

    return 1;
}

int testFahrenheitToCelsius02()
{
    FahrenheitToCelsiusConverter fahcon02;
    TINYTEST_EQUAL_EPSILON(fahcon02.convert(21.2), -6.0);
    TINYTEST_EQUAL_EPSILON(fahcon02.convert(-4.0), -20.0);
    TINYTEST_EQUAL_EPSILON(fahcon02.convert(-8.45), -22.472222);

    return 1;
}

int testFahrenheitToCelsius03()
{
    FahrenheitToCelsiusConverter fahcon03;
    TINYTEST_EQUAL_EPSILON(fahcon03.convert(0.0), -17.777778);
    TINYTEST_EQUAL_EPSILON(fahcon03.convert(1.0), -17.2222);
    TINYTEST_EQUAL_EPSILON(fahcon03.convert(-1.0), -18.3333);

    return 1;
}

int testCelsiusToFahrenheit01()
{
    CelsiusToFahrenheitConverter celcon{};
    TINYTEST_EQUAL_EPSILON(celcon.convert(0), 32.0);
    TINYTEST_EQUAL_EPSILON(celcon.convert(-100), -148.0);
    TINYTEST_EQUAL_EPSILON(celcon.convert(100), 212.0);

    return 1;
}

int testCelsiusToFahrenheit02()
{
    CelsiusToFahrenheitConverter celcon{};
    TINYTEST_EQUAL_EPSILON(celcon.convert(-2.2), 28.04);
    TINYTEST_EQUAL_EPSILON(celcon.convert(66.0), 150.8);
    TINYTEST_EQUAL_EPSILON(celcon.convert(-273.15), -459.67);

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

int testFactoryDollarToEuro()
{
    auto factory = ConverterFactory::instance();
    auto conv = factory->create_converter("DollarToEuro");
    TINYTEST_ASSERT(conv);

    return 1;
}

int testFactoryEuroToDollar()
{
    auto factory = ConverterFactory::instance();
    auto conv = factory->create_converter("EuroToDollar");
    TINYTEST_ASSERT(conv);

    return 1;
}

int testFactoryMilesToMeters()
{
    auto factory = ConverterFactory::instance();
    auto conv = factory->create_converter("MilesToMeters");
    TINYTEST_ASSERT(conv);

    return 1;
}

int testFactoryMetersToMiles()
{
    auto factory = ConverterFactory::instance();
    auto conv = factory->create_converter("MetersToMiles");
    TINYTEST_ASSERT(conv);

    return 1;
}

int testFactoryFahrenheitToCelsius()
{
    auto factory = ConverterFactory::instance();
    auto conv = factory->create_converter("FahrenheitToCelsius");
    TINYTEST_ASSERT(conv);

    return 1;
}

int testFactoryCelsiusToFahrenheit()
{
    auto factory = ConverterFactory::instance();
    auto conv = factory->create_converter("CelsiusToFahrenheit");
    TINYTEST_ASSERT(conv);

    return 1;
}


TINYTEST_START_SUITE(Convert);

TINYTEST_ADD_TEST(testDollarToEuro01);
TINYTEST_ADD_TEST(testDollarToEuro02);
TINYTEST_ADD_TEST(testDollarToEuro03);

TINYTEST_ADD_TEST(testEuroToDollar01);
TINYTEST_ADD_TEST(testEuroToDollar02);
TINYTEST_ADD_TEST(testEuroToDollar03);

TINYTEST_ADD_TEST(testMilesToMeters01);
TINYTEST_ADD_TEST(testMilesToMeters02);
TINYTEST_ADD_TEST(testMilesToMeters03);

TINYTEST_ADD_TEST(testMetersToMiles01);
TINYTEST_ADD_TEST(testMetersToMiles02);
TINYTEST_ADD_TEST(testMetersToMiles03);

TINYTEST_ADD_TEST(testFahrenheitToCelsius01);
TINYTEST_ADD_TEST(testFahrenheitToCelsius02);
TINYTEST_ADD_TEST(testFahrenheitToCelsius03);

TINYTEST_ADD_TEST(testCelsiusToFahrenheit01);
TINYTEST_ADD_TEST(testCelsiusToFahrenheit02);
TINYTEST_ADD_TEST(testCelsiusToFahrenheit03);

TINYTEST_ADD_TEST(testFactoryDollarToEuro);
TINYTEST_ADD_TEST(testFactoryEuroToDollar);
TINYTEST_ADD_TEST(testFactoryMilesToMeters);
TINYTEST_ADD_TEST(testFactoryMetersToMiles);
TINYTEST_ADD_TEST(testFactoryFahrenheitToCelsius);
TINYTEST_ADD_TEST(testFactoryCelsiusToFahrenheit);

TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(Convert);
