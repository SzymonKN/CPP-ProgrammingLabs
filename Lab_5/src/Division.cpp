#include "Division.h"

Division::Division(double n1, double n2){
    num1 = n1;
    num2 = n2;
    sign = "/";
}
void Division::print() const{
    std::cout<<num1<<" "<<sign<<" "<<num2;
}
double Division::eval() const{
    return num1/num2;
}