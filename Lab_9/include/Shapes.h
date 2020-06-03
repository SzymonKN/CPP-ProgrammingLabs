#include "Drawable.h"
#include "Transformable.h"
#include <math.h>

//Klasa Line reprezentująca odcinek w układzie współrzędnych
class Line:public Drawable, public Transformable
{
public:
    //Konstruktor tworzący odcinek z dwóch punktów p1 i p2
    Line(const Point& _p1,const Point& _p2){
        p1=_p1;
        p2=_p2;
    }
    //Metoda draw, rysująca odcinek
    void draw() const{
        std::cout<<"++ Rysuje linie od "<<p1<<" do "<<p2<<std::endl;
    }
    //Metoda shift, która przesuwa odcinek o wektor[_x,_y]
    void shift(double _x, double _y){
        p1.add(_x,_y);
        p2.add(_x,_y);
    }
private:
    Point p1,p2;
};


//Klasa Circle reprezentująca okrąg w układzie współrzędnych
class Circle:public ClosedShape, public Transformable
{
public:
    //Konstruktor tworzący okrąg z punktu p [środka] i promienia r
    Circle(const Point& p, double _r){
        s=p;
        r=_r;
    }
    //Metoda draw, rysująca okrąg
    void draw() const{
        std::cout<<"++ Rysuje kolo o srodku "<<s<<" i promieniu "<<r<<std::endl;
    }
    //Metoda shift, która przesuwa środek okręgu o wektor[_x,_y]
    void shift(double _x, double _y){
        s.add(_x,_y);
    }
    //Metoda area, licząca pole okręgu
    double area() const{
        return M_PI * r*r;
    }
private:
    double r;
    Point s;
};


//Klasa rectangle reprezentująca prostokąt w układzie współrzędnych
class Rectangle:public ClosedShape, public Transformable
{
public:
    //Konstruktor tworzący prostokąt z dwóch przeciwległych/przekątnych rogów
    Rectangle(const Point& p1,const Point& p2){
        r1=p1;
        r2=p2;
    }
    //Metoda draw, rysująca prostokąt
    void draw() const{
        std::cout<<"++ Rysuje prostokat o rogach w "<<r1<<" i "<<r2<<std::endl;
    }
    //Metoda shift, która przesuwa prostokąt o wektor[_x,_y]
    void shift(double _x, double _y){
        r1.add(_x,_y);
        r2.add(_x,_y);
        
    }
    //Metoda area, licząca pole prostokąta
    double area() const{
        return fabs(r1.getX() - r2.getX())*fabs(r1.getY() - r2.getY());
    }
private:
    Point r1,r2;

};