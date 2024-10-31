#include <iostream>

using namespace std;

class Number {
	int number;
public:
	void SetNumb(int numb) { number = numb; }
	int GetNumb() { return number; }
	void Transformation(int num);
	Number() {};
	~Number() {};

	
};

void Number::Transformation(int num) {
	this->number = num + 1;
	cout << number;
}


int main() {
	Number n = Number();
	n.SetNumb(4);
	n.Transformation(n.GetNumb());
}