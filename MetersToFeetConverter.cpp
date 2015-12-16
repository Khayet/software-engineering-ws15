#include "MetersToFeetConverter.hpp"

#include <string>

double MetersToFeetConverter::convert(const double inputMeters) const {
  return inputMeters*3.28084;
}

std::string MetersToFeetConverter::toString() const {
  return "Meters to Feet Converter";
}

void MetersToFeetConverter::print() const {
  std::cout << toString();
}
