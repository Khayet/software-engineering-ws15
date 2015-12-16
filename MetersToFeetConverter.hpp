#ifndef METERSTOFEETCONVERTER_H
#define METERSTOFEETCONVERTER_H

#include "LengthConverter.hpp"

class MetersToFeetConverter : public LengthConverter
{
  public:
    UnitConverter* clone() const { return new MetersToFeetConverter(); }
    double convert(const double inMeters) const;
    std::string toString() const;
    void print() const;
};

#endif
