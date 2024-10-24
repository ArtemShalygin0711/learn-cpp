#include <iostream>
#include <vector>

using namespace std;

class Human{
	string human;
public:
	void HUman(string HumaN) { human = HumaN; }
	string HUman() { return human; }
	Human(string huMan = ""):human(huMan) {};
	Human(const Human &h);
	~Human() {};


};

Human::Human(const Human& h) {
	human = h.human;


};


class Flat{
	vector<Human> humans;
	int NumberOfFlat;
public:

	void AppendHuman(string human);
	void NumberFlats(int numb) { NumberOfFlat = numb; }
	int NumberFlats() { return NumberOfFlat; }
	Human GetString();
	Flat(int numb = 0):NumberOfFlat(numb) {};
	//Flat(const Flat &h);
	~Flat() {};

	
};


Human Flat::GetString() {
	for (int i = 0; i < humans.size(); i++) {
		return humans[i];
	}
}


class House{
	vector<Flat> AmountOfFlat;
public:
	void AppendNumberOfFlats(int number);

	House() {};
	House(const House& m);
	~House() {};
};


void Flat::AppendHuman(string human) {
	Human h = Human(human);
	humans.push_back(h);
}

void House::AppendNumberOfFlats(int number) {
	Flat n = Flat(number);
	AmountOfFlat.push_back(n);
}


int main() {
	Human h = Human();
	h.HUman("tom");
	Flat f = Flat();
	f.AppendHuman("tom");
	House n = House();
	n.AppendNumberOfFlats(1);
	f.GetString();

}