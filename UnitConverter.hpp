#ifndef UNITCONVERTER_H
#define UNITCONVERTER_H

#include <iostream>
#include <string>
#include <memory>
#include <exception>

class UnitConverter
{
public:
    virtual UnitConverter* clone() const = 0;
    virtual double convert(const double inValue) const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};

#endif // UNITCONVERTER_H
