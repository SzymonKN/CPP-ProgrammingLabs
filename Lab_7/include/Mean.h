#pragma once
#include <iostream>
#include <string>
//Bazowa klasa Mean, po której dziedziczą inne klasy, odpowiada za polimorfizm w zadaniu
class Mean{
public:
    Mean() = default;
    virtual ~Mean() = default;

    //## Wirtualne metody umożliwiające polimorfizm [opisane w klasach pochodnych] ##
    virtual Mean& operator<<(double value) = 0;
    virtual const Mean& operator<<(double value) const = 0;
    virtual double result() const = 0;
    //###############################################################################

    //Metoda reset, zerująca sume i licznik(count)
    void reset();

    //Przeładowanie operatora strumienia wyjścia, aby wypisywał nazwę średniej (zmienną name)
    friend std::ostream& operator<<(std::ostream& out, const Mean& obj);

    //Zmienna name, przechowująca nazwę średniej
    std::string name;

    //Zmienna suma, przechowująca zsumowane elementy podane poprzez operator<<
    double suma;
    
    //Zmienna count, przechowująca ilość sumowań
    int count;
};
