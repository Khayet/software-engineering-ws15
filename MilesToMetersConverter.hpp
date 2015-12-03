#ifndef MILESTOMETERSCONVERTER_H
#define MILESTOMETERSCONVERTER_H

#include "LengthConverter.hpp"

class MilesToMetersConverter : public LengthConverter
{
  public:
    std::shared_ptr<UnitConverter> clone() const { return std::make_shared<MilesToMetersConverter>(); }
    double convert(const double inMiles) const;
    std::string toString() const;
    void print() const;
};

#endif // MILESTOMETERSCONVERTER_H
