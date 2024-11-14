#include <iostream>
#include <string>
#include<vector>
#include<ctime>
using namespace std;
string RandFruitsNames[10] = { "tom", "scott", "mark", "fedor", "alexandr", "alex", "borya", "fedya", "patrick", "gerodot" };
string RandFruitsSurnames[10] = { "Ivanov", "Petrov", "Smirnov", "Kuznetsov", "Popov", "Sidorov", "Morozov", "Vasilyev", "Fedorov", "Novikov" };
string RandFruitsPatronymic[10] = { "Ivanovich", "Petrov", "Smirnovich", "Kuznetsov", "Popovich", "Sidorov", "Morozovich", "Vasilyev", "Fedorovich", "Novikov" };
string GetRandomName() {return RandFruitsNames[rand() % 10];}
string GetRandomSurname() {return RandFruitsSurnames[rand() % 10];}
string GetRandomPatronymic() {return RandFruitsPatronymic[rand() % 10];}
class Fruit {
protected:
	string mName;
	string mSurname;
	string mPatronymic;
	int mAge;
	string percent;
	vector<Fruit> Fruits;
public:
	void SetName(string name) { mName = name; }
	string GetName() { return mName; }
	void SetSurname(string surname) { mSurname = surname; }
	string GetSurname() { return mSurname; }
	void SetPatronymic(string Patronymic) { mPatronymic = Patronymic; }
	string GetPatronymic() { return mPatronymic; }
	void SetAge(int age) { mAge = age; }
	int GetAge() { return  mAge; }
	void Print();
	string GetString();
	Fruit(string name = "", string surname = "", string patronymic = "", int age = 0, string percent = "") :mName(name), mSurname(surname), mPatronymic(patronymic), mAge(age), percent(percent) {};
	Fruit(const Fruit &f) :mName(f.mName), mSurname(f.mSurname), mPatronymic(f.mPatronymic), mAge(f.mAge), percent(f.percent) {};
	~Fruit() {};
};

string Fruit::GetString() {return mSurname + " " + mName + " " + mPatronymic + " " + to_string(mAge) + "\n"; }

class Orange : public Fruit {
	int oOrangesdegree;
public:
	void SetOrangesDegree(int percent) { oOrangesdegree = percent; }
	int GetOrangesDegree() { return oOrangesdegree; }
	Orange(int percent) :oOrangesdegree(percent) { AppendOranges(); };
	Orange(const Orange& o):oOrangesdegree(o.oOrangesdegree){};
	void AppendOranges();
	string GetString();
	void Print();
	~Orange() {};
};

string Orange::GetString() {
	string result;
	for (int i = 0; i < Fruits.size(); i++) {
		result += Fruits[i].GetString();
	}
	return result;
}

void Orange::AppendOranges() {
	for (int i = 0; i < 10; i++) {
		Fruit fruit = Fruit(GetRandomName(), GetRandomSurname(), GetRandomPatronymic(), rand()%100 + 1, "on he is  " + to_string(rand() % 100 + 1) + " percent of an orange");
		Fruits.push_back(fruit);
	}
};

class Pinaple : public Fruit {
	int oPinaplesdegree;
public:
	void SetPinaplessDegree(int percent) { oPinaplesdegree = percent; }
	int GetPinaplessDegree() { return oPinaplesdegree; }
	void AppendPinaples();
	string GetString();
	Pinaple(int percent) :oPinaplesdegree(percent) {};
	~Pinaple() {};
};


void Pinaple::AppendPinaples() {
	for (int i = 0; i < 10; i++) {
		Fruit fruit = Fruit(GetRandomName(), GetRandomSurname(), GetRandomPatronymic(), rand() % 100 + 1, "on he is  " + to_string(rand() % 100 + 1) + " percent of an pinapple");
		Fruits.push_back(fruit);
	}
}

class Apple : public Fruit {
	int oApplesdegree;
public:
	void SetPinaplessDegree(int percent) { oApplesdegree = percent; }
	int GetPinaplessDegree() { return oApplesdegree; }
	void AppendApples();
	Apple(int percent) :oApplesdegree(percent) {};
	~Apple() {};
};

void Apple::AppendApples() {
	for (int i = 0; i < 10; i++) {
		Fruit fruit = Fruit(GetRandomName(), GetRandomSurname(), GetRandomPatronymic(), rand() % 100 + 1," on he is  " + to_string(rand() % 100 + 1) + " percent of an apple");
		Fruits.push_back(fruit);
	}
}

void Orange::Print() {
	cout << GetString();
}


void Fruit::Print() {
	string result;
	for (int i = 0; i < 30; i++) {
		result += Fruits[i].GetString();
	}
	cout << result;
}

int main() {
	srand(time(0));
	Fruit f = Fruit();
	f.Print();
}