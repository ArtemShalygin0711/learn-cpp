#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Example {
	int *a;
public:
	void SetA(int value) { a = &value; }
	int *GetA() const { return a; }
	Example() :a(new int (0)) {};
	Example(const Example& e) { a = new int(*e.GetA()); };
	~Example() { delete a; };

	string GetString() { return "a = " + to_string(*a) + "\n"; }
	void GetPointerOfA() { cout << "a: " << a << "\n"; };
};


void check(Example e) {
	cout << e.GetString();
	
}


int main() {
	Example e = Example();
	Example b{ e };
	Example d{ Example() };
	e.GetPointerOfA();
	b.GetPointerOfA();
	d.GetPointerOfA();

}