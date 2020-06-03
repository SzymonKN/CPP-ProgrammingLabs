#include <cstddef>
//Klasa służąca tylko do wypisywania
class Printer
{
public:
    //Wypisywanie elementów lub zawartości obiektów różnych typów
    template <typename T>
    void print(const T &to_print);
    template <typename T, std::size_t len>
    void print(T (&to_print)[len]);

private:
    int counter = 0;
};

template <typename T>
void Printer::print(const T &to_print)
{
    counter++;
    std::cout << counter << " : " << to_print << std::endl;
}
template <typename T,std::size_t len>
void Printer::print(T (&to_print)[len])
{
    counter++;
    std::cout << counter << " : ";
    for(size_t i=0;i<len;++i){
        std::cout<<to_print[i]<<" ";
    }
     std::cout <<std::endl;
}