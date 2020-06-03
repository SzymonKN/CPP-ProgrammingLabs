#include "Trojkat.h"
#include <cmath>

Trojkat::Trojkat(int a, int b, int c){
    _a=a;
    _b=b;
    _c=c;
}

void Trojkat::wypisz(std::ostream& s) const{
    std::cout<<"Trojkat o bokach "<<_a<<" "<<_b<<" "<<_c<<std::endl;
}

double Trojkat::polePow() const{
    double obw = (_a+_b+_c)/2.0;

    return sqrt(obw*(obw-_a)*(obw-_b)*(obw-_c));
}