#ifndef CONDECORATOR_HPP
#define CONDECORATOR_HPP

#include "UnitConverter.hpp"

class Condecorator : public UnitConverter
{
public:
    Condecorator(UnitConverter* uni_ptr) :
    unit_ptr{uni_ptr} {}

    virtual double convert(const double inValue) const {
        if (unit_ptr == nullptr) {
            return inValue;
        }
        return unit_ptr->convert(inValue);
    }

    virtual UnitConverter* clone() const {
        return unit_ptr->clone();
    };

    virtual std::string toString() const {
        if (unit_ptr == nullptr) {
            return "ERROR Condecorator::toString(): Missing unit_ptr.";
        }
        return unit_ptr->toString();
    }

    virtual void print() const {
        std::cout << toString();
    }

protected:
    UnitConverter* unit_ptr;
};

#endif
