#include "MilesToMetersConverter.hpp"

#include <string>

double MilesToMetersConverter::convert(double inputMiles){
  return inputMiles*1609.344;
}

std::string MilesToMetersConverter::toString() const{
  return "Miles to Meters Converter";
}

void MilesToMetersConverter::print() const{
  std::cout << toString();
}
