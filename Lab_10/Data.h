#pragma once
#include <vector>
#include <initializer_list>
#include <string>
#include <iostream>
#include <algorithm>
#include <iomanip>
class Data
{
public:
    Data(std::string _day, std::initializer_list<double> l);
    void print() const;
    std::vector<double> getValues() const;

private:
    std::vector<double> values;
    std::string day;
};