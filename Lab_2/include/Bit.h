class Bit{
    public:
        Bit() = default;
        
        Bit(unsigned char* b_arr,unsigned int position){
            _postion = position;
            
            bit_arr = b_arr;
        }
        void operator=(const bool& v){
            if(v){
                *bit_arr |= 1 << _postion;
            }
            else{
                *bit_arr &= ~(1<<_postion);
            }
        }
        operator bool() const{
            return  static_cast<bool>( *bit_arr & (1 << _postion) );
        }
    private:
        unsigned int _postion;
        unsigned char* bit_arr;
};