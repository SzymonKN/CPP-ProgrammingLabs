#pragma once
#include "Mean.h"
//Klasa Odpowiadająca za obiekt średniej arytmetycznej
class ArithmeticMean:public Mean{
public:
    //Kontruktor odpowiadający za przypisane nazwy do zmiennej name
    ArithmeticMean();

    //Przeładownie operatora<<, tak aby zsumowywał i zliczał ilość podanych liczb
    ArithmeticMean& operator<<(double value) override;

    //Przeładownie const operatora<<, tak aby nie można było dodać liczby do stałej średniej
    const ArithmeticMean& operator<<(double value) const override; 

    //Metoda result(), wyliczająca średnią arytmetyczną na podstawie zmiennych count i suma
    double result() const override;
};