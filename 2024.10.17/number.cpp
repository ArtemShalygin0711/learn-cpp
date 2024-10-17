#include <iostream>
#include <string>

using namespace std;

class Number {
	int mValue = 0;
public:
	void Numb(int Value) { mValue = Value; }
	int Numb() { return mValue; }
	void Print();
	Number() {};
	~Number() {};
};

void Number::Print() {
	cout << mValue;
}

void Print(Number n) {
	n.Print();
}

int main() {
	Number numb = Number();
	Print(numb);
}