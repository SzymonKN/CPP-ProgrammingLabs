#include "HarmonicMean.h"
HarmonicMean::HarmonicMean(){
    name = "Harmonic";
    count = 0;
    suma = 0;
}
HarmonicMean* HarmonicMean::create(){
    return new HarmonicMean();
}

HarmonicMean& HarmonicMean::operator<<(double value){
    suma+=1/value;
    ++count;
    return *this;
}

const HarmonicMean& HarmonicMean::operator<<(double value) const{
    std::cout<<"cannot add value "<<value<<" to const"<<std::endl;
    return *this;
}
double HarmonicMean::result() const{
    if(suma)
        return count/(suma);
    else
        return 0;
    
    
}

