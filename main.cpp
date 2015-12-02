#include <memory>
#include <string>
#include "DollarToEuroConverter.hpp"
#include "EuroToDollarConverter.hpp"
#include "MetersToMilesConverter.hpp"
#include "MilesToMetersConverter.hpp"
#include "FahrenheitToCelsiusConverter.hpp"
#include "CelsiusToFahrenheitConverter.hpp"

int main(int argc, char* argv[])
{
  std::string conversion = argv[1];
  double value = std::stod(argv[2]);
  std::shared_ptr<UnitConverter> myConverter;

  if (conversion == "DollarToEuro") myConverter = std::make_shared<DollarToEuroConverter>();
  else if (conversion == "EuroToDollar") myConverter = std::make_shared<EuroToDollarConverter>();
  else if (conversion == "MetersToMiles")  myConverter = std::make_shared<MetersToMilesConverter>();
  else if (conversion == "MilesToMeters")  myConverter = std::make_shared<MilesToMetersConverter>();
  else if (conversion == "FahrenheitToCelsius")  myConverter = std::make_shared<FahrenheitToCelsiusConverter>();
  else if (conversion == "CelsiusToFahrenheit")  myConverter = std::make_shared<CelsiusToFahrenheitConverter>();

  double v = myConverter->convert(value);
  std::cout << myConverter->toString() << " has converted " << value << " to " << v << std::endl;

  return 0;
}

