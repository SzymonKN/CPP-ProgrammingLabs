#include "Operation.h"
#include <math.h>
//Klasa Exponentiation, dzidzicząca publicznie po Operation, odpowiada za obiekty potęgowania
class Exponentiation : public Operation{
public:  
    Exponentiation(double n1, double n2);
    void print() const;
    double eval() const;
};