#include <iostream>

using namespace std;

class Number {

	int numb;
	int numb2 = 5;
public:
	void Numb(int numberr) { numb = numberr; }

	int Numb() { return numb; }
	int GetSumNumb();
	void Print();
	Number() {};
	~Number() {};
};

int Number::GetSumNumb() {
	return numb + numb2;
}

void Number::Print() {
	cout << GetSumNumb();
}



int main() {
	Number n = Number();
	n.Numb(15);
	n.Print();

}