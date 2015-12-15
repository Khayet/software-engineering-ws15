#ifndef CELSIUSTOKELVINCONVERTER_H
#define CELSIUSTOKELVINCONVERTER_H

#include "TemperatureConverter.hpp"

class CelsiusToKelvinConverter : public TemperatureConverter
{
  public:
    std::shared_ptr<UnitConverter> clone() const { return std::make_shared<CelsiusToKelvinConverter>(); }
    double convert(const double inCelsius) const;
    std::string toString() const;
    void print() const;
};

#endif
