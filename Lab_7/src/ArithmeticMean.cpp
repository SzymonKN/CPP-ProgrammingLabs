#include "ArithmeticMean.h"

ArithmeticMean::ArithmeticMean(){
    name = "Arithmetic";
    suma = 0;
    count = 0;
}
ArithmeticMean& ArithmeticMean::operator<<(double value){
    suma+=value;
    ++count;
    return *this;
}
const ArithmeticMean& ArithmeticMean::operator<<(double value) const{
    std::cout<<"cannot add value "<<value<<" to const"<<std::endl;
    return *this;
}
double ArithmeticMean::result() const{
    if(count)
        return suma/count;
    else
        return 0;
}
