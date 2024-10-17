#include <iostream>
#include <string>

using namespace std;

class Number {
	int mValue = 0;
public:
	void Numb(int Value) { mValue = Value; }
	int Numb() { return mValue; }
	int Print();
	Number() {};
	~Number() {};
};

int Number::Print() {
	return mValue;
}

int main() {
	Number numb = Number();
	cout << numb.Print();
}