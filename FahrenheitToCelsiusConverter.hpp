#ifndef FAHRENHEITTOCELSIUSCONVERTER_H
#define FAHRENHEITTOCELSIUSCONVERTER_H

#include "TemperatureConverter.hpp"

class FahrenheitToCelsiusConverter : public TemperatureConverter
{
  public:
    double convert(const double inFahrenheit) const;
    std::string toString() const;
    void print() const;
};

#endif // FAHRENHEITTOCELSIUSCONVERTER_H
