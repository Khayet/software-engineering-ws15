#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "CurrencyConverter.hpp"

class DollarToEuroConverter : public CurrencyConverter
{
  public:
    std::shared_ptr<UnitConverter> clone() const { return std::make_shared<DollarToEuroConverter>(); }
    double convert(const double inDollars) const;
    std::string toString() const;
    void print() const;
};

#endif // DOLLARTOEUROCONVERTER_H
