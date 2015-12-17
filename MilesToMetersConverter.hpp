#ifndef MILESTOMETERSCONVERTER_H
#define MILESTOMETERSCONVERTER_H

#include "Condecorator.hpp"

class MilesToMetersConverter : public Condecorator
{
  public:
    MilesToMetersConverter() : Condecorator{ nullptr } {}
    MilesToMetersConverter(UnitConverter* ptr) : Condecorator{ptr} {}
    UnitConverter* clone() const { return new MilesToMetersConverter(); }
    double convert(const double inMiles) const;
    std::string toString() const;
    void print() const;
};

#endif // MILESTOMETERSCONVERTER_H
