#include <iostream>
#include <cstring>
#include "Bit.h"

class BitArray{
public:
    BitArray() = default;
    ~BitArray();
    BitArray(unsigned int number_of_bytes,const bool& val = false );
    Bit operator[](const unsigned int index) const;
    void print() const;
    void operator=(const BitArray& to_copy);
private:
    unsigned int size;
    unsigned char* b_array;
};