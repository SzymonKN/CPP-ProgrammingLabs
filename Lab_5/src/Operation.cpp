#include "Operation.h"

void operator >>=(std::string s,const Operation& obj){
    std::cout<<s+" ";
    obj.print();
    std::cout<<" "+s<<std::endl;
}
