#include "UnitConverter.hpp"

// Inspired by: Lecture Notes 06, slide 18
class Command
{
public:
    // Define Action as a pointer to a method
    typedef double (UnitConverter::*Action) (double) const;

    Command(UnitConverter* object, Action method, double param) :
        object_{object}, method_{method}, param_{param} {}

    void execute() { std::cout << "I've converted " << param_ << " to " << (*object_.*method_) (param_) << std::endl; }

private:
    UnitConverter* object_;
    Action method_;
    double param_;
};
