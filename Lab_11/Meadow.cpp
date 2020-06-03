#include "Meadow.h"

void Meadow::add(std::unique_ptr<Animal> to_add){
    animals_on_meadow.push_back(std::move(to_add));
}
void Meadow::print(std::string header) const{
    std::cout<<"=== "<<header<<" ==="<<std::endl;
    for(auto& v:animals_on_meadow){
        v->print();
        std::cout<<std::endl;
    }
}
std::vector<Sheep*> Meadow::getSheepHerd(){
   std::vector<Sheep*> owieczki =  std::vector<Sheep*>(); 
    for(auto& v:animals_on_meadow){
       if(dynamic_cast<Sheep*>(v.get()))
            owieczki.push_back(dynamic_cast<Sheep*>(v.get()));
    }
   return owieczki;
}
void Meadow::countNames() const{
    std::vector<std::string> names;
    for(auto& v: animals_on_meadow){
        names.push_back(v->name());
    }
    std::sort(names.begin(),names.end());
    auto to_count = std::unique(names.begin(),names.end());
    names.erase(to_count,names.end());
    for(auto namess:names){
        std::cout<<namess<<" : ";
        int count=0;
        count = std::count_if(animals_on_meadow.begin(),animals_on_meadow.end(),[&namess](auto&& an){return namess==an->name();});
        std::cout<<count<<std::endl;
    }


}