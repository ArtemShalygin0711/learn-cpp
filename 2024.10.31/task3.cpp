#include <iostream>


using namespace std;

class Number {
	int mValue = 0;
public:
	void Numb(int Value) { mValue = Value; }
	int Numb() { return mValue; }
	void Print();
	Number(int value) :mValue(value) {};
	~Number() {};
};

void Number::Print() {
	cout << mValue;
}

void Print(Number n) {
	n.Print();
}

int main(){
	int intValue = 10;
	Print(intValue);
}