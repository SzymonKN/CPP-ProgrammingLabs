#include <iostream>
#include <vector>
#include <functional>

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