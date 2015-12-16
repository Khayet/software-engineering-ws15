#ifndef EUROTOYENCONVERTER_H
#define EUROTOYENCONVERTER_H

#include "CurrencyConverter.hpp"

class EuroToYenConverter : public CurrencyConverter
{
  public:
    UnitConverter* clone() const { return new EuroToYenConverter(); }
    double convert(const double inputEuro) const;
    std::string toString() const;
    void print() const;
};

#endif
