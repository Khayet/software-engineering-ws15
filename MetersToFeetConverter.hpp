#ifndef METERSTOFEETCONVERTER_H
#define METERSTOFEETCONVERTER_H

#include "LengthConverter.hpp"

class MetersToFeetConverter : public LengthConverter
{
  public:
    std::shared_ptr<UnitConverter> clone() const { return std::make_shared<MetersToFeetConverter>(); }
    double convert(const double inMeters) const;
    std::string toString() const;
    void print() const;
};

#endif
