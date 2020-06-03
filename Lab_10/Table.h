#include "Data.h"
#include <climits>
class Table
{
public:
    Table() = default;
    void operator+=(const Data &to_list);
    void print();
    Table sort(int column);
    Table sortBy(bool (&f)(const Data &, const Data &));
    int getMinIndex();

private:
    std::vector<Data> tab;
};