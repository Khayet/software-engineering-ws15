#include "FahrenheitToCelsiusConverter.hpp"

#include <string>

double FahrenheitToCelsiusConverter::convert(const double inputFahrenheit) const{
  return Condecorator::convert((inputFahrenheit-32.0) * (5.0/9.0));
}

std::string FahrenheitToCelsiusConverter::toString() const{
  return "Fahrenheit to Celsius Converter";
}

void FahrenheitToCelsiusConverter::print() const{
  std::cout << toString();
}
