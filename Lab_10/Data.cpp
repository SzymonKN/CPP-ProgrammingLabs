#include "Data.h"

Data::Data(std::string _day, std::initializer_list<double> l) : day(_day)
{
    values.insert(values.end(), l.begin(), l.end());
}
void Data::print() const
{
    std::cout << day << ":";
    std::for_each(values.begin(), values.end(), [](double n) { std::cout << std::setw(7) << n; });
    std::cout << std::endl;
}
std::vector<double> Data::getValues() const
{
    return values;
}