#ifndef CONVERTERFACTORY_HPP
#define CONVERTERFACTORY_HPP

#include <string>
#include <memory>
#include <map>
#include "Condecorator.hpp"
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
    static std::map<std::string, UnitConverter*> c_prototypes; //prototype-pattern

public:
    UnitConverter* create_converter(std::string choice) const {
        return c_prototypes.find(choice)->second;
    }

    static ConverterFactory* instance() {
        if (c_instance == NULL)
            c_instance = new ConverterFactory;
        return c_instance;
    }
};

//initialize 10 converter prototypes and store them in a map
std::map<std::string, UnitConverter*> ConverterFactory::c_prototypes {
    {"ERROR", nullptr},
    {"DollarToEuro", new DollarToEuroConverter()},
    {"EuroToDollar", new EuroToDollarConverter()},
    {"EuroToYen", new EuroToYenConverter()},
    {"MetersToMiles", new MetersToMilesConverter()},
    {"MilesToMeters", new MilesToMetersConverter()},
    {"MetersToFeet", new MetersToFeetConverter()},
    {"FahrenheitToCelsius", new FahrenheitToCelsiusConverter()},
    {"CelsiusToFahrenheit", new CelsiusToFahrenheitConverter()},
    {"CelsiusToKelvin", new CelsiusToKelvinConverter()}
};

ConverterFactory* ConverterFactory::c_instance = NULL;

#endif
