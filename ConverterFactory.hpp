#ifndef CONVERTERFACTORY_HPP
#define CONVERTERFACTORY_HPP

#include <string>
#include "DollarToEuroConverter.hpp"
#include "EuroToDollarConverter.hpp"
#include "MetersToMilesConverter.hpp"
#include "MilesToMetersConverter.hpp"
#include "FahrenheitToCelsiusConverter.hpp"
#include "CelsiusToFahrenheitConverter.hpp"

class ConverterFactory {
private:
    ConverterFactory() {};
    static ConverterFactory* c_instance;

public:
    std::shared_ptr<UnitConverter> create_converter(std::string choice) const {
        if (choice == "DollarToEuro")
            return std::make_shared<DollarToEuroConverter>();
        else if (choice == "EuroToDollar")
            return std::make_shared<EuroToDollarConverter>();
        else if (choice == "MetersToMiles")
            return std::make_shared<MetersToMilesConverter>();
        else if (choice == "MilesToMeters")
            return std::make_shared<MilesToMetersConverter>();
        else if (choice == "FahrenheitToCelsius")
            return std::make_shared<FahrenheitToCelsiusConverter>();
        else if (choice == "CelsiusToFahrenheit")
            return std::make_shared<CelsiusToFahrenheitConverter>();
    }

    static ConverterFactory* instance() {
        if (c_instance == NULL)
            c_instance = new ConverterFactory;
        return c_instance;
    }
};

ConverterFactory* ConverterFactory::c_instance = NULL;

#endif
