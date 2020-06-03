#include "Data.h"
class Sum
{
public:
    Sum();
    void operator()(const double &val);

    double value();

protected:
    double sum_value;
};

class sumData : public Sum
{
public:
    explicit sumData(const Data &day);
};
