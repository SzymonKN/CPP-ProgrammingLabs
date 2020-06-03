#include "Animals.h"

void Sheep::print()const{
    std::cout<<"- Owca "<<name()<<" ";
    if(flag){
        std::cout<<"ostrzyzona";
    }
    else{
        std::cout<<"nieostrzyzona";
    }
}
Sheep::~Sheep(){
    std::cout<<"- Owca "<<name()<<" ";
    if(flag){
        std::cout<<"ostrzyzona ";
    }
    else{
        std::cout<<"nieostrzyzona ";
    }
    std::cout<<"wraca do zagrody"<<std::endl;
}
void Sheep::shear(){
    flag = true;
}
void Cow::print()const{
    std::cout<<"- Krowa "<<name();
}
Cow::~Cow(){
     std::cout<<"- Krowa "<<name()<<" wraca do obory"<<std::endl;
}
void Horse::print()const{
    std::cout<<"- Kon "<<name();
}
Horse::~Horse(){
     std::cout<<"- Kon "<<name()<<" wraca do stajni"<<std::endl;
}