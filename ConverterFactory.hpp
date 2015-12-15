#ifndef CONVERTERFACTORY_HPP
#define CONVERTERFACTORY_HPP

#include <string>
#include <memory>
#include <map>
#include "DollarToEuroConverter.hpp"
#include "EuroToDollarConverter.hpp"
#include "EuroToYenConverter.hpp"
#include "MetersToMilesConverter.hpp"
#include "MilesToMetersConverter.hpp"
#include "MetersToFeetConverter.hpp"
#include "FahrenheitToCelsiusConverter.hpp"
#include "CelsiusToFahrenheitConverter.hpp"
#include "CelsiusToKelvinConverter.hpp"

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

//initialize 10 converter prototypes and store them in a map
std::map<std::string, std::shared_ptr<UnitConverter>> ConverterFactory::c_prototypes {
    {"ERROR", nullptr},
    {"DollarToEuro", std::make_shared<DollarToEuroConverter>()},
    {"EuroToDollar", std::make_shared<EuroToDollarConverter>()},
    {"EuroToYen", std::make_shared<EuroToYenConverter>()},
    {"MetersToMiles", std::make_shared<MetersToMilesConverter>()},
    {"MilesToMeters", std::make_shared<MilesToMetersConverter>()},
    {"MetersToFeet", std::make_shared<MetersToFeetConverter>()},
    {"FahrenheitToCelsius", std::make_shared<FahrenheitToCelsiusConverter>()},
    {"CelsiusToFahrenheit", std::make_shared<CelsiusToFahrenheitConverter>()},
    {"CelsiusToKelvin", std::make_shared<CelsiusToKelvinConverter>()}
};

ConverterFactory* ConverterFactory::c_instance = NULL;

#endif
