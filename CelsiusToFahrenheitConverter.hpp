#ifndef CELSIUSTOFAHRENHEITCONVERTER_H
#define CELSIUSTOFAHRENHEITCONVERTER_H

#include "Condecorator.hpp"

class CelsiusToFahrenheitConverter : public Condecorator
{
  public:
    CelsiusToFahrenheitConverter() : Condecorator{ nullptr } {}
    CelsiusToFahrenheitConverter(UnitConverter* ptr) : Condecorator{ptr} {}
    UnitConverter* clone() const { return new CelsiusToFahrenheitConverter(); }
    double convert(const double inCelsius) const;
    std::string toString() const;
    void print() const;
};

#endif // CELSIUSTOFAHRENHEITCONVERTER_H
