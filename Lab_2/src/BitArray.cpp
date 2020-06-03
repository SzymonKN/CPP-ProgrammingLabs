#include "BitArray.h"
#include <cmath>

BitArray::BitArray(unsigned int number_of_bytes, const bool& val){
    size = number_of_bytes;
    unsigned int _size = ceil(size/8.0); 
    b_array = new unsigned char[_size];
    for(unsigned int i=0;i<=_size;++i){
        if(val)
        b_array[i] = 0xFF;
        else
        b_array[i] = 0x00;
     
    }
}
BitArray::~BitArray(){
    delete [] b_array;
}
 //Bit operator[](const unsigned int index) const;
  //  void print() const;

  Bit BitArray::operator[](const unsigned int index) const{
      unsigned int position = (ceil(index/8));

      return Bit(&b_array[position],index%8);
  }

  void BitArray::print() const{
      for (int i=size-1;i>=0;i--){
          
        std::cout<< static_cast<bool>( b_array[i/8] & (1 << i%8) );
        if(!(i%8)){
              std::cout<<" <-"<<i<<" ";
          }
      }
      
  }
void BitArray::operator=(const BitArray& to_copy){
    std::memcpy( this->b_array, to_copy.b_array, ceil(to_copy.size/8.0) );
   // std::cout<<"KOPIOWANIE "<<ceil(to_copy.size/8.0)<<std::endl;
}