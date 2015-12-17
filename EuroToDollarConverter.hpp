#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

#include "Condecorator.hpp"

class EuroToDollarConverter : public Condecorator
{
  public:
    EuroToDollarConverter() : Condecorator{ nullptr } {}
    EuroToDollarConverter(UnitConverter* ptr) : Condecorator{ptr} {}
    UnitConverter* clone() const { return new EuroToDollarConverter(); }
    double convert(const double inputEuro) const;
    std::string toString() const;
    void print() const;
};

#endif // EUROTODOLLARCONVERTER_H
