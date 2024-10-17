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

int main() {
	Number numb = Number();
	numb.Print();
}