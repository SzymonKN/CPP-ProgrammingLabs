#pragma once
//Klasa Point reprezentująca punkt w układzie współrzędnych
class Point{
public:
    //Domyślny konstruktor ustawiony na default 
    //[W przypadku jego braku program zgłaszał błąd(?)]
    Point() = default;
    //Konstruktor tworzący punkt o współrzędnych (_x,_y)
    explicit Point(double _x, double _y){
        x=_x;
        y=_y;
    }
    //Metoda add, która dodaje wartości val1 i val2 do współrzędnych
    //[Pojawiła się z uwagi na prywatne współrzedne x,y i metodę shift z Transformable]
    void add(double val1, double val2){
        x+=val1;
        y+=val2;
    }
    //Metody get - używane przy obliczaniu pola zamkniętej figury
    //Metoda getX, zwracająca współrzedną x
    double getX() const{
        return x;
    }
    //Metoda getY, zwracająca współrzedną y
    double getY() const{
        return y;
    }
    //Zaprzyjaźnienie operatora wypisania
    friend std::ostream& operator<<(std::ostream& out,const Point& p);
private:
    double x,y;
};
//Przeładowanie operatora wyjścia, aby Punkt był wypisany w formie "(x,y)"
std::ostream& operator<<(std::ostream& out,const Point& p){
    out<<"("<<p.x<<", "<<p.y<<")";
    return out;
}