#include "Operation.h"
//Klasa Division, dzidzicząca publicznie po Operation, odpowiada za obiekty dzielenia
class Division : public Operation{
public: 
    Division(double n1, double n2);
    double eval() const;
    void print() const;
};