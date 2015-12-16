#include <memory>
#include <string>
#include "ConverterFactory.hpp"
#include "Inversion.hpp"

int main(int argc, char* argv[])
{
    std::string conversion = argv[1];
    double value = std::stod(argv[2]);

    auto factory = ConverterFactory::instance();
    std::shared_ptr<UnitConverter> myConverter = factory->create_converter(conversion);

    double v = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted " << value << " to " << v << std::endl;

    auto myConverter_inv = Inversion( factory->create_converter(conversion) );

    double v_inv = myConverter_inv->convert(value);
    std::cout << myConverter_inv.toString() << " has inverted conversion from " << value << " to " << v_inv << std::endl;
    return 0;
}
