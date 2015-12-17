#include "MilesToMetersConverter.hpp"

#include <string>

double MilesToMetersConverter::convert(const double inputMiles) const{
  return Condecorator::convert(inputMiles*1609.344);
}

std::string MilesToMetersConverter::toString() const{
  return "Miles to Meters Converter";
}

void MilesToMetersConverter::print() const{
  std::cout << toString();
}
