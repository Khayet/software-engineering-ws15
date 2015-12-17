#include "CelsiusToFahrenheitConverter.hpp"

#include <string>

double CelsiusToFahrenheitConverter::convert(const double inputCelsius) const{
  return Condecorator::convert(inputCelsius * (9.0/5.0) + 32.0);
}

std::string CelsiusToFahrenheitConverter::toString() const{
  return "Celsius to Fahrenheit Converter";
}

void CelsiusToFahrenheitConverter::print() const{
  std::cout << toString();
}
