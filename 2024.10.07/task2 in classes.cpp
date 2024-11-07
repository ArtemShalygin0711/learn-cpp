#include <iostream>
#include <string>

using namespace std;

class Number {
	int numb;
public:
	void Print();
	Number() {};
	Number(int number):numb(number) {};
	~Number() {};
};

void GetNumb(Number n) {
	 n.Print();
}

 void Number::Print() {
	 cout << numb;
 }

int main() {
	int z = 10;
	GetNumb(10);
}