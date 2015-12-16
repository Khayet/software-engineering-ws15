#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "CurrencyConverter.hpp"

class DollarToEuroConverter : public CurrencyConverter
{
  public:
    UnitConverter* clone() const { return new DollarToEuroConverter(); }
    double convert(const double inDollars) const;
    std::string toString() const;
    void print() const;
};

#endif // DOLLARTOEUROCONVERTER_H
