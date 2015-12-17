#ifndef EUROTOYENCONVERTER_H
#define EUROTOYENCONVERTER_H

#include "Condecorator.hpp"

class EuroToYenConverter : public Condecorator
{
  public:
    EuroToYenConverter() : Condecorator{ nullptr } {}
    EuroToYenConverter(UnitConverter* ptr) : Condecorator{ptr} {}
    UnitConverter* clone() const { return new EuroToYenConverter(); }
    double convert(const double inputEuro) const;
    std::string toString() const;
    void print() const;
};

#endif
