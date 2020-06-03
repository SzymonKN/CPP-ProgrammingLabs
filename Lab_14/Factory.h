#include <iostream>

class Factory
{
public:
    //szablon funckji, który przypisuje podaną zmienną
    template <typename T>
    void prototype(const T &value)
    {
        helper_function<T>(value);
    }
    //szablon funckji, który zwraca wcześniej podaną zmienną
    template <typename T>
    T &manufacture()
    {
        T* val = nullptr;
        return this->helper_function<T>(*val);
    }
    //pomocniczy szablon funkcji, do obsługi przypisania i wypisania
    template <typename T>
    T &helper_function(const T &value)
    {
        static T _value ;
        static int count = 1;
        if(&value==nullptr&&count==1){
            throw std::runtime_error("no prototype for this type");
        }
        if (&value!=nullptr){
            _value = value;
            
        }
        count++;
        return _value;
    }
};