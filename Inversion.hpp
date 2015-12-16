#ifndef INVERSION_HPP
#define INVERSION_HPP

#include "Condecorator.hpp"

class Inversion : public Condecorator
{
public:
    Inversion(UnitConverter* unicon) : Condecorator{unicon} {}

    double convert(const double inValue) const {
        return inValue / (unit_ptr->convert(1.0));
    }

    virtual std::string toString() const {
        if (unit_ptr == nullptr) {
            return "ERROR Inversion::toString(): Missing unit_ptr.";
        }
        return unit_ptr->toString();
    }

    virtual void print() const {
        std::cout << toString();
    }
};

#endif
