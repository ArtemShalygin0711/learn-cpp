#include <iostream>
#include <string>

using namespace std;

class Eat {
	int mass;
public:
	Eat(int m) :mass(m) {};
	void GetMass() { cout << mass; }
	
};

class Bakery : public Eat {
	int massbakery;
public:
	Bakery() :Eat(1200) {};
};

int main() {
	Bakery bakery = Bakery();
	cout << "this product weight: ";
	bakery.GetMass();
}