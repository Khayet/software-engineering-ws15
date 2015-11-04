#include "EuroToDollarConverter.hpp"

#include <string>

double EuroToDollarConverter::convert(double inputEuro){
  return inputEuro*1.10;
}

std::string EuroToDollarConverter::toString() const{
  return "Euro to Dollar UnitConverter";
}

void EuroToDollarConverter::print() const{
  std::cout << toString();
}
