#include "Shapes.h"

//Funckja draw wywołująca polimorficzną funkcję rysowania 
void draw(Drawable* to_draw){
    to_draw->draw();
}
//Uwaga!
//Zdaję sobię sprawę, że nie powinno się pisać metod w plikach nagłówkowych,
//ale nauczony doświadczeniem, wolałem zrobić całe zadanie w zadanym czasie, niż rozdzielać metody 


/*  HIERARCHIA

Patrząc na plik lab09.cpp stwierdziłem, że występuje 7 klas.
Z uwagi na Error'y klasy Transformable i Drawable musiały być ze sobą całkowicie niezwiązane.
Natomiast nic nie stało na przeszkodzie, aby klasa ClosedShape nie dziedziczyła po Drawable.
A klasę Point potraktowałem jako osobną instancję.
Stąd:

ClosedShape dziedziczy po Drawable

Linia, Koło i Prostokąt dziedziczą po Transformable

Linia dziedziczy po Drawable

Koło i Prostokąt dziedziczą po ClosedShape

Uwaga!:
Wiem, że można byłoby dodać jedną klase np: Kształt, ale uznałem, że na potrzeby tego zadania, 
nie jest ona niezbędna.

*/