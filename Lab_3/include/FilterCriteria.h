#include <iostream>
#include <vector>
#include <functional>

class FilterCriteria{
public:
	void add(std::function<bool(int)> f);
	std::function<bool(int)> get(int i);
	int size();
private:
	std::vector<std::function<bool(int)>> crits;
};