#ifndef FAHRENHEITTOCELSIUSCONVERTER_H
#define FAHRENHEITTOCELSIUSCONVERTER_H

#include "Condecorator.hpp"

class FahrenheitToCelsiusConverter : public Condecorator
{
  public:
    FahrenheitToCelsiusConverter() : Condecorator{ nullptr } {}
    FahrenheitToCelsiusConverter(UnitConverter* ptr) : Condecorator{ptr} {}
    UnitConverter* clone() const { return new FahrenheitToCelsiusConverter(); }
    double convert(const double inFahrenheit) const;
    std::string toString() const;
    void print() const;
};

#endif // FAHRENHEITTOCELSIUSCONVERTER_H
