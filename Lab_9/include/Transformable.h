#pragma once
//Klasa Transformable - służy do pokazania, że kształty dziedziczącej po niej, można przesunąć/zmodyfikować
class Transformable{
public:
    //Wirtualna metoda shift, dodająca wartości x,y do współrzędnych kształtów
    virtual void shift(double x, double y) = 0;
    virtual ~Transformable() = default;
};