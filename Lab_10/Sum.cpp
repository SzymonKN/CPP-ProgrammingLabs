#include "Sum.h"

Sum::Sum()
{
    sum_value = 0;
}
void Sum::operator()(const double &val)
{
    sum_value += val;
}

double Sum::value()
{
    return sum_value;
}
sumData::sumData(const Data &day)
{
    sum_value = 0;
    std::vector<double> tmp = day.getValues();
    std::for_each(tmp.begin(), tmp.end(), [this](double &t) { this->sum_value += t; });
}