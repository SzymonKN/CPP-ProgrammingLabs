#include "FilterCriteria.h"
/*
#include <iostream>
#include <vector>
#include <functional>

class FilterCriteria{
public:
	void add(std::function<bool(int)> f);
	std::function<bool(int)> get(int i);
private:
	std::vector<std::function<bool(int)>> crits;
}*/
void FilterCriteria::add(std::function<bool(int)> f){
	crits.push_back(f);
}
std::function<bool(int)> FilterCriteria::get(int i){
	return crits[i];
}
int FilterCriteria::size(){
	return crits.size();
}