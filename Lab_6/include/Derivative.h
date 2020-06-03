#include "Function.h"
class Derivative: public Function{
public:
    explicit Derivative(const Function* to_copy);
    Derivative(const Derivative&);
    Derivative(const Derivative*);
    double calc(double x) override;
    const double calc(double x) const override;
    void set_dx(double _dx);
    //Derivative operator =(const Derivative&);
    ~Derivative();
    const Derivative* deep_copy() const override{
        return new Derivative(f);
    }
private:
    double dx;
    const Function *f;
};