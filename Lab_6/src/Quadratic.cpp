#include "Quadratic.h"

Quadratic::Quadratic(double _a, double _b, double _c){
    a=_a;
    b=_b;
    c=_c;
}
double Quadratic::calc(double x){
    return a*x*x + b*x +c;
}
const double Quadratic::calc(double x) const{
    return a*x*x + b*x +c;
}