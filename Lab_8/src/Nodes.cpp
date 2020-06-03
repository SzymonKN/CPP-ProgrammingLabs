#include "Nodes.h"
NodeInt::NodeInt(int v):Node(){
   
    value = v;
}
void NodeInt::print() const{
    std::cout<<value;
}


NodeString::NodeString(std::string text):Node(){

    value = text;
}
void NodeString::print() const{
    std::cout<<value;
}
