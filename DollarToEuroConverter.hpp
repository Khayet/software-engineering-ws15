#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "Condecorator.hpp"

class DollarToEuroConverter : public Condecorator
{
  public:
    DollarToEuroConverter() : Condecorator{ nullptr } {}
    DollarToEuroConverter(UnitConverter* ptr) : Condecorator{ptr} {}
    UnitConverter* clone() const { return new DollarToEuroConverter(); }
    double convert(const double inDollars) const;
    std::string toString() const;
    void print() const;
};

#endif // DOLLARTOEUROCONVERTER_H
