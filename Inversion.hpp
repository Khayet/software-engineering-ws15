#ifndef INVERSION_HPP
#define INVERSION_HPP

#include "Condecorator.hpp"

class Inversion : public Condecorator {
public:
    Inversion(std::shared_ptr<Condecorator> condec) : Condecorator{condec} {}

    double convert(const double inValue) const {
        return 1.0 / (condec_->convert(inValue));
    }

    virtual std::string toString() const {
        if (condec_ == nullptr) {
            return "ERROR Inversion::toString(): Missing condec_.";
        }
        return condec_->toString();
    }

    virtual void print() const {
        std::cout << toString();
    }

private:
    std::shared_ptr<Condecorator> condec_;
};

#endif
