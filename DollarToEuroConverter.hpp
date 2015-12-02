#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "CurrencyConverter.hpp"

class DollarToEuroConverter : public CurrencyConverter
{
  public:
    double convert(const double inDollars) const;
    std::string toString() const;
    void print() const;
};

#endif // DOLLARTOEUROCONVERTER_H
