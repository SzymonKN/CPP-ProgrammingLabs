#pragma once
#include <iostream>
#include <exception>
//Klasa służąca do rzucania, jako autorski wyjątek
class BadDimsException : public std::exception
{
private:
    std::string info;

public:
    //Konstruktor przypisujący wiadomość
    explicit BadDimsException(std::string text);
    //Metoda zwracająca wiadomość
    std::string what();
};