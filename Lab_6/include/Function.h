#pragma once
#include <cmath>
#include <iostream>
class Function{
public:
    Function() = default;
    virtual double calc(double x) = 0;
    virtual const double calc(double x) const = 0;
    virtual ~Function() = default;
    virtual const Function* deep_copy() const = 0;
};