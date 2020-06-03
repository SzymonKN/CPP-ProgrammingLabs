#include "Operation.h"
//Klasa SumOfElements, dzidzicząca publicznie po Operation, odpowiada za obiekty dodawania tablic liczb
class SumOfElements : public Operation{
public:
    SumOfElements(double *tab, const int& n);
    void print() const;
    double eval() const;
private:
    double *numbers;
    int len;
};