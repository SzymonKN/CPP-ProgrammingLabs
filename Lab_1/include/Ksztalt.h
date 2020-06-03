#pragma once
#include <iostream>


class Ksztalt{
    public:
        virtual void wypisz(std::ostream& s) const = 0;
        virtual double polePow() const= 0;
        virtual ~Ksztalt() = default;
};

void wypisz(const Ksztalt& k);