#ifndef CELSIUSTOKELVINCONVERTER_H
#define CELSIUSTOKELVINCONVERTER_H

#include "TemperatureConverter.hpp"

class CelsiusToKelvinConverter : public TemperatureConverter
{
  public:
    UnitConverter* clone() const { return new CelsiusToKelvinConverter(); }
    double convert(const double inCelsius) const;
    std::string toString() const;
    void print() const;
};

#endif
