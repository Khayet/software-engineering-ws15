#ifndef CONVERTERFACTORY_HPP
#define CONVERTERFACTORY_HPP

#include <string>
#include <memory>
#include "DollarToEuroConverter.hpp"
#include "EuroToDollarConverter.hpp"
#include "MetersToMilesConverter.hpp"
#include "MilesToMetersConverter.hpp"
#include "FahrenheitToCelsiusConverter.hpp"
#include "CelsiusToFahrenheitConverter.hpp"

class ConverterFactory {
private:
    ConverterFactory() {}; //singleton-pattern -> constructor is private
    static ConverterFactory* c_instance;
    static std::shared_ptr<UnitConverter> c_prototypes[7]; //prototype-pattern

public:
    std::shared_ptr<UnitConverter> create_converter(std::string choice) const {
        if (choice == "DollarToEuro")
            return c_prototypes[1];
        else if (choice == "EuroToDollar")
            return c_prototypes[2];
        else if (choice == "MetersToMiles")
            return c_prototypes[3];
        else if (choice == "MilesToMeters")
            return c_prototypes[4];
        else if (choice == "FahrenheitToCelsius")
            return c_prototypes[5];
        else if (choice == "CelsiusToFahrenheit")
            return c_prototypes[6];
        else {
            std::cerr << "Error: No Converter found. Using DollarToEuroConverter instead.\n";
            return c_prototypes[0];
        }
    }

    static ConverterFactory* instance() {
        if (c_instance == NULL)
            c_instance = new ConverterFactory;
        return c_instance;
    }
};

//initialize 7 converter prototypes
std::shared_ptr<UnitConverter> ConverterFactory::c_prototypes[7] {
    nullptr,
    std::make_shared<DollarToEuroConverter>(), std::make_shared<EuroToDollarConverter>(),
    std::make_shared<MetersToMilesConverter>(), std::make_shared<MilesToMetersConverter>(),
    std::make_shared<FahrenheitToCelsiusConverter>(), std::make_shared<CelsiusToFahrenheitConverter>()
};

ConverterFactory* ConverterFactory::c_instance = NULL;

#endif
