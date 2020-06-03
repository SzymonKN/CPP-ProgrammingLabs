#include "Exponentiation.h"
Exponentiation::Exponentiation(double n1, double n2){
    num1 = n1;
    num2 = n2;
    sign = "^";
}
void Exponentiation::print() const{
    std::cout<<num1<<" "<<sign<<" "<<num2;
}

double Exponentiation::eval() const{
    return pow(num1,num2);
}