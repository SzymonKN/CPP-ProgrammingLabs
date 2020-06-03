#include <iostream>
#include <iomanip>
#include "BadDimsException.h"
//Klasa reprezentująca tablicę dwuwymiarową
class Array2D
{
private:
    double *tab;
    int x, y;
    //licznik dla operatora[] - odpowiada za poprawne wypisanie przy odniesienie do tablicy poprzez [][]
    int count_for_operator = 0;

public:
    //Zaprzyjaźniony operator wypisania
    friend std::ostream &operator<<(std::ostream &out, const Array2D &obj);
    //Konstruktor tworzący tablicę i uzupełniający ją od 1 do i*j
    Array2D(int _x, int _y);
    //Destruktor niszczący zalokowaną tablicę
    ~Array2D();
    //Metoda zmieniająca wymiary tablicy
    void reshape(int _x, int _y);
    //Metoda zwracająca referencję do wartości w tablicy
    double &at(int _x, int _y);
    //Przełądowanie operatora[], obsługuje odniesienie do tablicy poprzez [][]
    double *operator[](int i);
     //Metoda zwracająca referencję do wartości w tablicy
    double &at(int _x, int _y) const;
    //Przeładowanie operatora przypisania, nie przypisuje wskaźnika tablicy, lecz tworzy głęboką kopie
    void operator=(const Array2D &to_copy);
};
