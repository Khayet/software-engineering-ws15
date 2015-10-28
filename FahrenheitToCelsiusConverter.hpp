#ifndef FAHRENHEITTOCELSIUSCONVERTER_H
#define FAHRENHEITTOCELSIUSCONVERTER_H

#include "TemperatureConverter.hpp"

class FahrenheitToCelsiusConverter : public TemperatureConverter
{
  public:
    double convert(double inFahrenheit);
    std::string toString() const;
    void print() const;
};

#endif // FAHRENHEITTOCELSIUSCONVERTER_H
