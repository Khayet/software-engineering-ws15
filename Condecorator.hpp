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

protected:
    UnitConverter* unit_ptr;
};

#endif
