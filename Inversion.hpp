#ifndef INVERSION_HPP
#define INVERSION_HPP

#include "Condecorator.hpp"

class Inversion : public Condecorator
{
public:
    Inversion(UnitConverter* unicon) : Condecorator{unicon} {}

    virtual UnitConverter* clone() const {
        return unit_ptr->clone();
    }

    double convert(const double inValue) const {
        return inValue / (unit_ptr->convert(1.0));
    }

    virtual std::string toString() const {
        try {
            if (unit_ptr == nullptr) {
                throw std::runtime_error;
            // return "ERROR Inversion::toString(): Missing unit_ptr.";
            }
        }
        catch(std::exception& e) {
            std::cout << e.what() << "\n";
        }
        return unit_ptr->toString();
    }

    virtual void print() const {
        std::cout << toString();
    }
};

#endif
