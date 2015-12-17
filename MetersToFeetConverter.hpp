#ifndef METERSTOFEETCONVERTER_H
#define METERSTOFEETCONVERTER_H

#include "Condecorator.hpp"

class MetersToFeetConverter : public Condecorator
{
  public:
    MetersToFeetConverter() : Condecorator{ nullptr } {}
    MetersToFeetConverter(UnitConverter* ptr) : Condecorator{ptr} {}
    UnitConverter* clone() const { return new MetersToFeetConverter(); }
    double convert(const double inMeters) const;
    std::string toString() const;
    void print() const;
};

#endif
