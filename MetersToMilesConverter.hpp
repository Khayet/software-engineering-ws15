#ifndef METERSTOMILESCONVERTER_H
#define METERSTOMILESCONVERTER_H

#include "LengthConverter.hpp"

class MetersToMilesConverter : public LengthConverter
{
  public:
    double convert(const double inMeters) const;
    std::string toString() const;
    void print() const;
};

#endif // METERSTOMILESCONVERTER_H
