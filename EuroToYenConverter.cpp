#include "EuroToYenConverter.hpp"

#include <string>

double EuroToYenConverter::convert(const double inputEuro) const{
  return inputEuro*133.014554;
}

std::string EuroToYenConverter::toString() const{
  return "Euro to Yen Converter";
}

void EuroToYenConverter::print() const{
  std::cout << toString();
}
