#include <memory>
#include <string>
#include "ConverterFactory.hpp"

int main(int argc, char* argv[])
{
  std::string conversion = argv[1];
  double value = std::stod(argv[2]);

  auto factory = ConverterFactory::instance();
  std::shared_ptr<UnitConverter> myConverter = factory->create_converter(conversion);

  double v = myConverter->convert(value);
  std::cout << myConverter->toString() << " has converted " << value << " to " << v << std::endl;

  return 0;
}
