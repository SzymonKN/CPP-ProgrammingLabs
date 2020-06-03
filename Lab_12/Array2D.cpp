#include "Array2D.h"

#include <iostream>
#include <iomanip>
#include "BadDimsException.h"

Array2D::Array2D(int _x, int _y) : x(_x), y(_y)
{
    tab = new double[x * y];
    for (int i = 0; i < x * y; ++i)
    {
        tab[i] = i + 1;
    }
}
Array2D::~Array2D()
{
    delete tab;
}
void Array2D::reshape(int _x, int _y)
{
    if (_x * _y != x * y)
        throw BadDimsException("dimensions " + std::to_string(_x) + " and " + std::to_string(_y) + " do not conform with " + std::to_string(x) + " and " + std::to_string(y) + "");
    else
    {
        x = _x;
        y = _y;
    }
}
double &Array2D::at(int _x, int _y)
{
    if (_x >= x)
        throw std::out_of_range("out of range at i=" + std::to_string(_x));
    else if (_y >= y)
    {
        throw std::out_of_range("out of range at j=" + std::to_string(_y));
    }
    return tab[y * _x + _y];
}
double *Array2D::operator[](int i)
{
    count_for_operator++;
    if (count_for_operator == 1)
        return &tab[i * y];
    else
        count_for_operator = 0;
    return &tab[i];
}
double &Array2D::at(int _x, int _y) const
{
    if (_x >= x)
        throw std::out_of_range("out of range at i=" + std::to_string(_x));
    else if (_y >= y)
    {
        throw std::out_of_range("out of range at j=" + std::to_string(_y));
    }
    return tab[y * _x + _y];
}
void Array2D::operator=(const Array2D &to_copy)
{
    
    tab = (double*) realloc(tab,to_copy.x * to_copy.y*sizeof(double));
    x = to_copy.x;
    y = to_copy.y;
    for (int i = 0; i < x * y; ++i)
    {
        tab[i] = to_copy.tab[i];
    }
}

std::ostream &operator<<(std::ostream &out, const Array2D &obj)
{
    for (int i = 0; i < obj.x * obj.y; ++i)
    {
        if (i % obj.y == 0 && i != 0)
            out << std::endl;
        out << std::setw(4) << obj.tab[i];
    }
    out << std::endl;
    return out;
}