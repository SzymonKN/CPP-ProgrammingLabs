#include "Kwadrat.h"

void Kwadrat::wypisz(std::ostream& s) const{
    std::cout<<"Kwadrat o boku : "<<_a<<std::endl;
}
Kwadrat::Kwadrat(int a){
    _a=a;
}
double Kwadrat::polePow() const{
    return _a*_a;
}