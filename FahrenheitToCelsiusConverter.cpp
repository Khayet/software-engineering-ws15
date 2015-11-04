#include "FahrenheitToCelsiusConverter.hpp"

#include <string>

double FahrenheitToCelsiusConverter::convert(double inputFahrenheit) {
  return (inputFahrenheit-32) * (5/9);
}

std::string FahrenheitToCelsiusConverter::toString() const{
  return "Fahrenheit to Celsius Converter";
}

void FahrenheitToCelsiusConverter::print() const{
  std::cout << toString();
}