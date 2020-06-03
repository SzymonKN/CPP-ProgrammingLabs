#pragma once
#include <string>
#include <iostream>
class TestClass{
public:
    explicit TestClass(std::string text);
    ~TestClass();
    void setName(std::string text);
    const std::string info();
    std::string info() const;
private:
    std::string inf;
};