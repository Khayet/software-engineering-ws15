#ifndef METERSTOMILESCONVERTER_H
#define METERSTOMILESCONVERTER_H

#include "Condecorator.hpp"

class MetersToMilesConverter : public Condecorator
{
  public:
    MetersToMilesConverter() : Condecorator{ nullptr } {}
    MetersToMilesConverter(UnitConverter* ptr) : Condecorator{ptr} {}
    UnitConverter* clone() const { return new MetersToMilesConverter(); }
    double convert(const double inMeters) const;
    std::string toString() const;
    void print() const;
};

#endif // METERSTOMILESCONVERTER_H
