#include "CelsiusToKelvinConverter.hpp"

#include <string>

double CelsiusToKelvinConverter::convert(const double inputCelsius) const{
  return Condecorator::convert(inputCelsius + 273.15);
}

std::string CelsiusToKelvinConverter::toString() const{
  return "Celsius to Kelvin Converter";
}

void CelsiusToKelvinConverter::print() const{
  std::cout << toString();
}
