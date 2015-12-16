#ifndef CONDECORATOR_HPP
#define CONDECORATOR_HPP

class Condecorator : public UnitConverter {
public:
    Condecorator(std::shared_ptr<UnitConverter> conpointer) :
    condec_ptr{conpointer} {}

    virtual double convert(const double inValue) const {
        if (condec_ptr == nullptr) {
            return inValue;
        }
        return condec_ptr->convert(inValue);
    }

    virtual std::shared_ptr<UnitConverter> clone() const {
        return condec_ptr;
    };

    virtual std::string toString() const {
        if (condec_ptr == nullptr) {
            return "ERROR Condecorator::toString(): Missing condec_ptr.";
        }
        return condec_ptr->toString();
    }

    virtual void print() const {
        std::cout << toString();
    }

private:
    std::shared_ptr<UnitConverter> condec_ptr;
};

#endif
