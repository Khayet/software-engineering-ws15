#include "CelsiusToKelvinConverter.hpp"

#include <string>

double CelsiusToKelvinConverter::convert(const double inputCelsius) const{
  try {
    if (inputCelsius < -273.15) throw std::out_of_range();
    return Condecorator::convert(inputCelsius + 273.15);
  } catch(std::exception& e) {
    std::cout << "Celsius value is out of range.\n";
  }
}

std::string CelsiusToKelvinConverter::toString() const{
  return "Celsius to Kelvin Converter";
}

void CelsiusToKelvinConverter::print() const{
  std::cout << toString();
}
