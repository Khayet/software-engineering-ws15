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

    std::cout << "17: still working\n";
    std::shared_ptr<Inversion> myConverter_inv = std::make_shared<Inversion>( factory->create_converter(conversion) );
    std::cout << "19: still working\n";

    double v_inv = myConverter_inv->convert(value);
    std::cout << "22: still working\n";

    std::cout << myConverter_inv->toString() << " has inverted conversion from " << value << " to " << v_inv << std::endl;
    return 0;
}
