#include "EuroToDollarConverter.hpp"

#include <string>

double EuroToDollarConverter::convert(const double inputEuro) const{
  return Condecorator::convert(inputEuro*1.09);
}

std::string EuroToDollarConverter::toString() const{
  return "Euro to Dollar Converter";
}

void EuroToDollarConverter::print() const{
  std::cout << toString();
}
