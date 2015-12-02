#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

#include "CurrencyConverter.hpp"

class EuroToDollarConverter : public CurrencyConverter
{
  public:
    double convert(const double inputEuro) const;
    std::string toString() const;
    void print() const;
};

#endif // EUROTODOLLARCONVERTER_H
