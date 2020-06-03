#include "Kolo.h"

Kolo::Kolo(int r){
    _r=r;
}
void Kolo::wypisz(std::ostream& s) const{
    std::cout<<"Kolo o promieniu : "<<_r<<std::endl;
}
double Kolo::polePow() const{
    return 3.1415 *_r*_r;
}