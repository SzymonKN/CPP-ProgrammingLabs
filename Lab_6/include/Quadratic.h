#include "Function.h"

class Quadratic: public Function{
public:
    explicit Quadratic(double a, double b, double c);
    double calc(double x) override;
    const double calc(double x) const override;
    const Quadratic* deep_copy() const override{
        return new Quadratic(a,b,c);
    }
private:
    double a,b,c;
};