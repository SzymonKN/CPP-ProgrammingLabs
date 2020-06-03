#include "List.h"
/*
class List{
public:
	void insert(int x);
	void print();
	void print(std::string s) const;
	int& operator[](int x);
	List filter(std::function <bool(int)> f);

private:
	std::vector<int> numbers; 

};

*/
void List::insert(int x){
	numbers.push_back(x);
}
void List::print(){
	std::cout<<"[";
	for(int x:numbers){
		std::cout<<" "<<x;
	}
	std::cout<<"]"<<std::endl;
}
int& List::operator[](int x){
	return numbers[x];
}

void List::print(std::string s) const{
	std::cout<<s<<" [";
	for(int x:numbers){
		std::cout<<" "<<x;
	}
	std::cout<<"]"<<std::endl;
}

List List::filter(std::function <bool(int)> f){
	List temp;
	for(int x:numbers){
		if(f(x))
			temp.insert(x);
	}
	return temp;
}