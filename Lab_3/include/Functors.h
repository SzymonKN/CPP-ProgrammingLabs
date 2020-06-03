class Functors{
public:
class divisibleBy{
public:
	divisibleBy(int x){
		number = x;
	}
	bool operator()(int x){
		if(x%number)
			return false;
		return true;
	}
private:
	int number;
};
class greaterThan{
public:
	greaterThan(int x){
		number = x;
	}
	bool operator()(int x){
		if(x > number)
			return true;
		return false;
	}
private:
	int number;
};

};