#include "Sin.h"

Sin::Sin(double _a){
    a=_a;
}
double Sin::calc(double x){
    return sin(a*x);
}
const double Sin::calc(double x) const{
    return sin(a*x);
}
void Sin::set_parameter(double new_a){
    a = new_a;
}