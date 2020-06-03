#pragma once
#include <string>
#include <iostream>
//Pierwotna klasa do dziedziczenia, posiada virtualne metody, aby wiązania dynamiczne były możliwe
class Operation{
public:
    // wirtalna metoda print, służy do wypisywania działań -> tj. liczb ze znakami działań
    virtual void print() const = 0;
    //wirtualna metoda eval(), służy do obliczania wartości działań
    virtual double eval() const = 0;
    double num1;
    double num2;
    std::string sign;
    virtual ~Operation() = default;
};
//Operator >>= dodaje na koniec i początek linii, string s podany jako parametr
void operator >>=(std::string s,const Operation& obj);