#include <iostream>
//Klasa Number, przechowująca liczby z podanego zakresu
class Number
{
public:
    //Statyczne zmienne, przedstawiające zakres, z którego liczby może przechowywać klasa Number
    static double min;
    static double max;
    //Metoda setRange(), ustala zakres liczb
    static void setRange(double _min, double _max);
    //Kontruktor , przypisujący zmiennej klasowej podaną liczbę // Może rzucić wyjątek, gdy value nie spełnia zakresu
    explicit Number(double value);
    //Metoda print(), wypisująca liczbę i zakres
    void print();
    //Metoda value() zwracająca referencję do obiektu klasy
    Number &value();
    //Metoda value() zwracająca referencję do stałego obiektu klasy
    const Number &value() const;
    //Operator przypisania, przypisujący zmiennej klasowej podaną liczbę // Może rzucić wyjątek, gdy value nie spełnia zakresu
    Number operator=(double n2);
    //Operator wypisania, wypisuje liczbę przechowywaną przez obiekt klasy
    friend std::ostream &operator<<(std::ostream &out, const Number &obj);

private:
    double number;
};
