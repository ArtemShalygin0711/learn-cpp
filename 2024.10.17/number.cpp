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
	Number numb = Number();
	numb.Numb(10);
	return numb.Numb();
}

int main() {
	Number numb = Number();
	cout << numb.Print();
}