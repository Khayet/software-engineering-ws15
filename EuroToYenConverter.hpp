#ifndef EUROTOYENCONVERTER_H
#define EUROTOYENCONVERTER_H

#include "CurrencyConverter.hpp"

class EuroToYenConverter : public CurrencyConverter
{
  public:
    std::shared_ptr<UnitConverter> clone() const { return std::make_shared<EuroToYenConverter>(); }
    double convert(const double inputEuro) const;
    std::string toString() const;
    void print() const;
};

#endif
