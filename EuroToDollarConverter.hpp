#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

#include "CurrencyConverter.hpp"

class EuroToDollarConverter : public CurrencyConverter
{
  public:
    double convert(double inputEuro);
    std::string toString() const;
    void print() const;
};

#endif // EUROTODOLLARCONVERTER_H
