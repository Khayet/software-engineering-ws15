#ifndef CONVERTERFACTORY_HPP
#define CONVERTERFACTORY_HPP

#include <string>
#include <memory>
#include <map>
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
    static std::map<std::string, std::shared_ptr<UnitConverter>> c_prototypes; //prototype-pattern

public:
    std::shared_ptr<UnitConverter> create_converter(std::string choice) const {
        return c_prototypes.find(choice)->second;
    }

    static ConverterFactory* instance() {
        if (c_instance == NULL)
            c_instance = new ConverterFactory;
        return c_instance;
    }
};

//initialize 7 converter prototypes and store them in a map
std::map<std::string, std::shared_ptr<UnitConverter>> ConverterFactory::c_prototypes {
    {"ERROR", nullptr},
    {"DollarToEuro", std::make_shared<DollarToEuroConverter>()},
    {"EuroToDollar", std::make_shared<EuroToDollarConverter>()},
    {"MetersToMiles", std::make_shared<MetersToMilesConverter>()},
    {"MilesToMeters", std::make_shared<MilesToMetersConverter>()},
    {"FahrenheitToCelsius", std::make_shared<FahrenheitToCelsiusConverter>()},
    {"CelsiusToFahrenheit", std::make_shared<CelsiusToFahrenheitConverter>()}
};

ConverterFactory* ConverterFactory::c_instance = NULL;

#endif
