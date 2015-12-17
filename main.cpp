#include <memory>
#include <string>
#include <iostream>
#include <deque>

#include "ConverterFactory.hpp"
#include "Inversion.hpp"
#include "Command.hpp"

int main(int argc, char* argv[])
{
    std::string conversion = argv[1];
    double value = std::stod(argv[2]);

    auto factory = ConverterFactory::instance();
    UnitConverter* myConverter = factory->create_converter(conversion);

    double v = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted " << value << " to " << v << std::endl;

    Inversion* myConverter_inv = new Inversion( factory->create_converter(conversion) );
    double v_inv = myConverter_inv->convert(value);
    std::cout << myConverter_inv->toString() << " has inversely converted " << value << " to " << v_inv << std::endl;

    std::deque<Command> com_queue;
    std::string conv_str, arg;
    for (std::string line; std::getline(std::cin, conv_str, ' ');) {
        std::getline(std::cin, arg);
        Command com(factory->create_converter(conv_str),
                    &UnitConverter::convert, std::stod(arg));
        com_queue.push_back(com);
        std::cout << line << std::endl;
    }

    for (auto i : com_queue) i.execute();

    return 0;
}
