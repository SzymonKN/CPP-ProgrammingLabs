#include "Function.h"

class Sin: public Function{
public:
    explicit Sin(double _a);
    double calc(double x) override;
    const double calc(double x) const override;
    void set_parameter(double new_a);
    const Sin* deep_copy() const override{
        return new Sin(a);
    }
private:
    double a;
};