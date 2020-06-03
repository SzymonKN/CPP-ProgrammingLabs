#include "Derivative.h"

Derivative::Derivative(const Function* to_copy){
  
    f = to_copy;

}
double Derivative::calc(double x){
    return (this->f->calc(x+dx) - this->f->calc(x-dx))/(2*dx);
}
const double Derivative::calc(double x) const{
    return (this->f->calc(x+dx) - this->f->calc(x-dx))/(2*dx);
}
void Derivative::set_dx(double _dx){
    dx = _dx;
}
Derivative::~Derivative(){
    delete  f;
}

Derivative::Derivative(const Derivative& to_copy){

    f = to_copy.f->deep_copy();
    dx = to_copy.dx;
    
}
Derivative::Derivative(const Derivative* to_copy){
   f = to_copy;
}