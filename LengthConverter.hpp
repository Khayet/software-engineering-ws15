#ifndef LENGTHCONVERTER_H
#define LENGTHCONVERTER_H

#include <iostream>
#include <string>
#include "UnitConverter.hpp"

class LengthConverter : public UnitConverter
{
  public:
    virtual double convert(double inValue) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};

#endif // LENGTHCONVERTER_H
