#ifndef CELSIUSTOKELVINCONVERTER_H
#define CELSIUSTOKELVINCONVERTER_H

#include "Condecorator.hpp"

class CelsiusToKelvinConverter : public Condecorator
{
  public:
    CelsiusToKelvinConverter() : Condecorator{ nullptr } {}
    CelsiusToKelvinConverter(UnitConverter* ptr) : Condecorator{ptr} {}
    UnitConverter* clone() const { return new CelsiusToKelvinConverter(); }
    double convert(const double inCelsius) const;
    std::string toString() const;
    void print() const;
};

#endif
