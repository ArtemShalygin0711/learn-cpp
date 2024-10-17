#include <iostream>
#include <string>

using namespace std;

class Number {
	int mValue = 0;
public:
	void Numb(int Value) { mValue = Value; }
	int Numb() { return mValue; }
	int Print(int vAlue);
	Number() {};
	~Number() {};
};

int Number::Print(int vAlue) {
	Number numb = Number();
	numb.Numb(vAlue);
	return numb.Numb();
}

int main() {
	Number numb = Number();
	cout << numb.Print(10);
}