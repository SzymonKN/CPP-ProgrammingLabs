#pragma once
#include <iostream>
#include "Point.h"
//Klasa Drawable - służąca do pokazania,że kształt można narysować
class Drawable{
public:
    //Czysto wirtualna funkcja draw 
    virtual void draw() const =0;
    virtual ~Drawable() = default;
};
//Klasa ClosedShape - służąca do pokazania, że można obliczyć pole kształtu
class ClosedShape: public Drawable
{
public:
    //Czysto wirtualna funkcja draw 
    virtual void draw() const =0;
    virtual ~ClosedShape() = default;
    //Czysto wirtualna funkcja area
    virtual double area() const = 0;
};