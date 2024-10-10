#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Example {
	int a;
public:
	void SetA(int value) { a = value; }
	int GetA() const { return a; }
	Example() :a(0) {};
	Example(const Example& e) :a(e.GetA()) {};
	~Example() {};

	string GetString() { return "a = " + to_string(a) + "\n"; }
};


void check(Example e) {
	cout << e.GetString();
	
}


int main() {
	Example e = Example();
	check(e);

}s