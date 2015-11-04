#ifndef CURRENCYCONVERTER_H
#define CURRENCYCONVERTER_H

#include <iostream>
#include <string>
#include "UnitConverter.hpp"

class CurrencyConverter : public UnitConverter
{
  public:
    virtual double convert(double inValue) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};

#endif // CURRENCYCONVERTER_H
