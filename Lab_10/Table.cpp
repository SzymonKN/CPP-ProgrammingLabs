#include "Table.h"

void Table::operator+=(const Data &to_list)
{
    tab.push_back(to_list);
}
void Table::print()
{
    std::for_each(tab.begin(), tab.end(), [](const Data &to_print) { to_print.print(); });
    std::cout << std::endl;
}
Table Table::sort(int column)
{
    if (getMinIndex() <= column)
        std::cout << "Indeks " << column << " nieprawidlowy!" << std::endl;
    else
    {
        std::sort(tab.begin(), tab.end(), [column](const Data &com1, const Data &com2) {
            return com1.getValues()[column] < com2.getValues()[column];
        });
    }
    return *this;
}
Table Table::sortBy(bool (&f)(const Data &, const Data &))
{
    std::sort(tab.begin(), tab.end(), f);
    return *this;
}
int Table::getMinIndex()
{
    unsigned int min = INT_MAX;
    std::for_each(tab.begin(), tab.end(), [&min](const Data &to_check) {
        if (min >= to_check.getValues().size())
            min = to_check.getValues().size();
    });
    return min;
}