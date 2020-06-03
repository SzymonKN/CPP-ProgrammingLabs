#include "TestClass.h"
#include <iostream>

TestClass::TestClass(std::string text){
    inf=text;
    std::cout<<"++ Tworze obiekt TestClass: "<<inf<<std::endl;
}
TestClass::~TestClass(){
    if(this!=nullptr){
     std::cout<<"-- Usuwam obiekt TestClass: "<<inf<<std::endl;
    }
}
void TestClass::setName(std::string text){
    inf=text;
}

const std::string TestClass::info(){
    return inf;
}
std::string TestClass::info() const{
    return inf;
}