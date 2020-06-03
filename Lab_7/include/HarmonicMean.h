#pragma once
#include "Mean.h"
//Klasa Odpowiadająca za obiekt średniej harmonicznej
class HarmonicMean: public Mean{
public:
    //Kontruktor odpowiadający za przypisane nazwy do zmiennej name
    HarmonicMean();

    //Przeładownie operatora<<, tak aby zsumowywał i zliczał ilość podanych liczb
    HarmonicMean& operator<<(double value) override;

    //Przeładownie const operatora<<, tak aby nie można było dodać liczby do stałej średniej
    const HarmonicMean& operator<<(double value) const override;

    //Metoda result(), wyliczająca średnią harmoniczną na podstawie zmiennych count i suma
    double result() const override;
    
    //Statyczna metoda create(), zwracająca nowy obiekt klasy HarmonicMean
    static HarmonicMean* create();
};