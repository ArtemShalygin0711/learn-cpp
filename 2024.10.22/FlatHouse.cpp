#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Human {
	string mName;
	string mSurname;
	string mPatronymic;
public:
	// getter & setter
	void SetName(string value) { mName = value; }
	string GetName() { return mName; }
	void SetSurname(string value) { mSurname = value; }
	string GetSurname() { return mSurname; }
	void SetPatronymic(string value) { mPatronymic = value; }
	string GetPatronymic() { return mPatronymic; }
	string GetString();

	// ctor & dtor
	Human(string name, string surname, string patronymic);
	Human(const Human& h);
	~Human() {};
};

Human::Human(string name = "", string surname = "", string patronymic = "") :
	mName(name), mSurname(surname), mPatronymic(patronymic) {};
Human::Human(const Human& h) : mName(h.mName), mSurname(h.mSurname), mPatronymic(h.mPatronymic) {};

string Human::GetString()
{
	return mSurname + " " + mName + " " + mPatronymic + "\n";
}

class Flat {
	vector<Human> Humans;
	int NumberOfFlat;
public:

	void AppendHuman(string Human);
	void NumberFlats(int numb) { NumberOfFlat = numb; }
	int NumberFlats() { return NumberOfFlat; }
	string GetString();
	void Print();
	void AppendHuman(string name, string surname, string patronymic);
	Flat(int numb = 0) :NumberOfFlat(numb) {};
	//Flat(const Flat &h);
	~Flat() {};


};

void Flat::Print() {
	cout << GetString();

}

string Flat::GetString() {
	string result = "Flat: " + to_string(NumberOfFlat + 1) + "\n";
	for (int i = 0; i < Humans.size(); i++) {
		result += Humans[i].GetString();
	}
	
	return result;
	
}



class House {
	vector<Flat> Flats;
	int numberHouse;
public:
	void SetNumberHouse(int numberhouse) { numberHouse = numberhouse; }
	int GetNumberHouse() { return numberHouse; }
	void Print();

	void AppendNumberOfFlats(int number);
	string GetString();


	House() {};
	House(const House& m);
	~House() {};
};

string House::GetString() {
	string result = "Flat: " + to_string(numberHouse) + "\n";
	for (int i = 0; i < Flats.size(); i++) {
		result += Flats[i].GetString();
	}

	return result;

}


void House::Print() {
	cout << GetString();
}







void Flat::AppendHuman(string name, string surname, string patronymic) {
	Human h = Human(name, surname, patronymic);
	Humans.push_back(h);
}

void House::AppendNumberOfFlats(int number) {
	Flat n = Flat(number);
	Flats.push_back(n);
}


int main() {
	House n = House();
	n.AppendNumberOfFlats(1);
	Human h = Human("tom", "cruse", "abc");
	Flat f = Flat(4);
	f.AppendHuman("tom", "cruse", "abc");
	f.Print();
	f.AppendHuman("tom", "cruse", "abc");
	f.Print();
	n.AppendNumberOfFlats(4);
	n.Print();

}