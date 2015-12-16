#ifndef CONDECORATOR_HPP
#define CONDECORATOR_HPP

#include "UnitConverter.hpp"

class Condecorator : public UnitConverter
{
public:
    Condecorator(std::shared_ptr<UnitConverter> conpointer) :
    condec_ptr{conpointer} {}

    virtual double convert(const double inValue) const {
        std::cout << "Condecorator::convert 13 still working" << std::endl;
        if (condec_ptr == nullptr) {
            return inValue;
        }
        std::cout << "Condecorator::convert 17 still working" << std::endl;
        return condec_ptr->convert(inValue);
        std::cout << "Condecorator::convert 19 still working" << std::endl;
    }

    virtual std::shared_ptr<UnitConverter> clone() const {
        return condec_ptr;
    };

    virtual std::string toString() const {
        if (condec_ptr == nullptr) {
            return "ERROR Condecorator::toString(): Missing condec_ptr.";
        }
        return condec_ptr->toString();
    }

    virtual void print() const {
        std::cout << toString();
    }

private:
    std::shared_ptr<UnitConverter> condec_ptr;
};

#endif
