#include "Mean.h"

std::ostream& operator<<(std::ostream& out, const Mean& obj){
    out<< obj.name;
    return out;
}
void Mean::reset(){
    suma = 0;
    count = 0;
}
