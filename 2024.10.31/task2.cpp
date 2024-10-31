#include <iostream>

using namespace std;

class Number {

	int numb;
public:
	void Numb(int numberr) { numb = numberr; }
	int Numb() { return numb; }
	
	Number() {};
	~Number() {};
};

void GetNumers(int numb) {
	cout << numb << "\n";
}

void GetNumbers(float numb) {
	cout << numb << "\n";
}


int main() {
	float doubleValue = 10.5;
	int intValue = 5;
	GetNumers(doubleValue);
	GetNumers(intValue);
	

}