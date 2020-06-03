#include "Number.h"

double Number::min = 0;
double Number::max = 10;

void Number::setRange(double _min, double _max)
{
    min = _min;
    max = _max;
}
Number::Number(double value)
{
    if (value < min || value > max)
    {
        throw std::out_of_range("Out of range during construction");
    }
    else
    {
        number = value;
    }
}
void Number::print()
{
    std::cout << "Number: " << number << " is in the range [" << min << ", " << max << "]" << std::endl;
}
Number &Number::value()
{
    return *this;
}
const Number &Number::value() const
{
    return *this;
}
Number Number::operator=(double n2)
{
    if (n2 > Number::max || n2 < Number::min)
    {
        throw std::out_of_range("Out of range during assignment");
    }
    else
    {
        number = n2;
    }
    return *this;
}
std::ostream &operator<<(std::ostream &out, const Number &obj)
{
    out << obj.number;
    return out;
}