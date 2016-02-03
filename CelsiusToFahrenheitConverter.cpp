#include "CelsiusToFahrenheitConverter.hpp"

#include <string>

double CelsiusToFahrenheitConverter::convert(const double inputCelsius) const{
  try {
    if (inputCelsius < -273.15) throw std::out_of_range();
    return Condecorator::convert(inputCelsius * (9.0/5.0) + 32.0);
  } catch(std::exception& e) {
    std::cout << "Celsius value is out of range.\n";
  }
}

std::string CelsiusToFahrenheitConverter::toString() const{
  return "Celsius to Fahrenheit Converter";
}

void CelsiusToFahrenheitConverter::print() const{
  std::cout << toString();
}
