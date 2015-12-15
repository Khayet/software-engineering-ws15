#ifndef CONDECORATOR_HPP
#define CONDECORATOR_HPP

class Condecorator : public UnitConverter {
public:
    Condecorator(std::shared_ptr<UnitConverter> conpointer) :
    condec_ptr{conpointer} {}

    virtual double convert(const double inValue) const override {
        if (condec_ptr == nullptr)
        {
            return inValue;
        }
        return condec_ptr->convert(inValue);
    }

private:
    std::shared_ptr<UnitConverter> condec_ptr;
};

#endif
