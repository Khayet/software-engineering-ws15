#ifndef UNITCONVERTER_H
#define UNITCONVERTER_H

#include <iostream>
#include <string>
#include <memory>

class UnitConverter
{
  public:
    virtual std::shared_ptr<UnitConverter> clone() const = 0;
    virtual double convert(const double inValue) const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};

#endif // UNITCONVERTER_H
