#include "SumOfElements.h"

SumOfElements::SumOfElements(double *tab, const int& n){
    numbers = tab;
    len = n;
    sign = " + ";
}
void SumOfElements::print() const{
    std::cout<<numbers[0];
    for(int i=1;i<len;++i){
        std::cout<<sign<<numbers[i];
    }
}
double SumOfElements::eval() const{
    double sum = 0;
    for(int i=0;i<len;++i){
        sum+=numbers[i];
    }
    return sum;
}