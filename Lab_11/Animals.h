#pragma once
#include "Animal.h"
#include<iostream>
class Sheep: public Animal{
public:
    explicit Sheep(const std::string name):Animal(name){};
    void print() const override;
    ~Sheep();
    void shear();
    operator bool(){
        return true;
    };
private:
    bool flag = false;
};

class Cow: public Animal{
public:
    explicit Cow(const std::string name):Animal(name){};
    void print() const override;
    ~Cow();
     operator bool(){
        return false;
    };
};
class Horse: public Animal{
public:
    explicit Horse(const std::string name):Animal(name){};
    void print() const override;
    ~Horse();
     operator bool(){
        return false;
    };
};