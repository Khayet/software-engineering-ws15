#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

#include "CurrencyConverter.hpp"

class EuroToDollarConverter : public CurrencyConverter
{
  public:
    std::shared_ptr<UnitConverter> clone() const { return std::make_shared<EuroToDollarConverter>(); }
    double convert(const double inputEuro) const;
    std::string toString() const;
    void print() const;
};

#endif // EUROTODOLLARCONVERTER_H
