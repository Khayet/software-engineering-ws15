#include "CelsiusToFahrenheitConverter.hpp"

#include <string>

double CelsiusToFahrenheitConverter::convert(double inputCelsius) {
  return inputCelsius * (9/5) + 32;
}

std::string CelsiusToFahrenheitConverter::toString() const{
  return "Celsius to Fahrenheit Converter";
}

void CelsiusToFahrenheitConverter::print() const{
  std::cout << toString();
}