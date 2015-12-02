#ifndef MILESTOMETERSCONVERTER_H
#define MILESTOMETERSCONVERTER_H

#include "LengthConverter.hpp"

class MilesToMetersConverter : public LengthConverter
{
  public:
    double convert(const double inMiles) const;
    std::string toString() const;
    void print() const;
};

#endif // MILESTOMETERSCONVERTER_H
