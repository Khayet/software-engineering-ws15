#ifndef CELSIUSTOFAHRENHEITCONVERTER_H
#define CELSIUSTOFAHRENHEITCONVERTER_H

#include "TemperatureConverter.hpp"

class CelsiusToFahrenheitConverter : public TemperatureConverter
{
  public:
    UnitConverter* clone() const { return new CelsiusToFahrenheitConverter(); }
    double convert(const double inCelsius) const;
    std::string toString() const;
    void print() const;
};

#endif // CELSIUSTOFAHRENHEITCONVERTER_H
