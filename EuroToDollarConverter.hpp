#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

#include "CurrencyConverter.hpp"

class EuroToDollarConverter : public CurrencyConverter
{
  public:
    UnitConverter* clone() const { return new EuroToDollarConverter(); }
    double convert(const double inputEuro) const;
    std::string toString() const;
    void print() const;
};

#endif // EUROTODOLLARCONVERTER_H
