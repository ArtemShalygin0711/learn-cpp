#include <iostream>
#include <string>
#include<vector>
#include<ctime>
using namespace std;

string RandFruitsNames[10] = { "tom", "scott", "mark", "fedor", "alexandr", "alex", "borya", "fedya", "patrick", "gerodot" };
string RandFruitsSurnames[10] = { "Ivanov", "Petrov", "Smirnov", "Kuznetsov", "Popov", "Sidorov", "Morozov", "Vasilyev", "Fedorov", "Novikov" };
string RandFruitsPatronymic[10] = { "Ivanovich", "Petrov", "Smirnovich", "Kuznetsov", "Popovich", "Sidorov", "Morozovich", "Vasilyev", "Fedorovich", "Novikov" };

string GetRandomName() {
	string randomName = RandFruitsNames[rand() % 10];
	return randomName;
}

string GetRandomSurname() {
	string randomSurname = RandFruitsSurnames[rand() % 10];
	return randomSurname;
}

string GetRandomPatronymic() {
	string randomPatronymic = RandFruitsPatronymic[rand() % 10];
	return randomPatronymic;
}

class Fruit {
protected:
	string mName;
	string mSurname;
	string mPatronymic;
	int mAge;
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
	Fruit(string name = "", string surname = "", string patronymic = "", int age = 0) :mName(name), mSurname(surname), mPatronymic(patronymic), mAge(age) {};
	~Fruit() {};
};

string Fruit::GetString() {
	SetName(GetRandomName());
	SetSurname(GetRandomSurname());
	SetPatronymic(GetRandomPatronymic());
	return mSurname + " " + mName + " " + mPatronymic + "\n";
}

class Orange : public Fruit {
	int oOrangesdegree;
public:
	void SetOrangesDegree(int percent) { oOrangesdegree = percent; }
	int GetOrangesDegree() { return oOrangesdegree; }
	Orange(int percent) :oOrangesdegree(percent) {};
	void AppendOranges();
	Fruit GetString();
	void Print();
	~Orange() {};
};

Fruit Orange::GetString() {
	for (int i = 0; i < 10; i++) {
		Fruit fruit = GetString();
		return Fruits[i];
	}
}

void Orange::AppendOranges() {
	for (int i = 0; i < 10; i++) {
		Fruit fruit = Fruit();
		Fruits.push_back(fruit);
	}
};

class Pinaple : public Fruit {
	int oPinaplesdegree;
public:
	void SetPinaplessDegree(int percent) { oPinaplesdegree = percent; }
	int GetPinaplessDegree() { return oPinaplesdegree; }
	Pinaple(int percent) :oPinaplesdegree(percent) {};
	~Pinaple() {};
};

class Apple : public Fruit {
	int oApplesdegree;
public:
	void SetPinaplessDegree(int percent) { oApplesdegree = percent; }
	int GetPinaplessDegree() { return oApplesdegree; }
	Apple(int percent) :oApplesdegree(percent) {};
	~Apple() {};
};


void Orange::Print() {
	Fruit f = Fruit();
	cout << f.GetString();
}


int main() {
	srand(time(0));
	Orange orange = Orange(20);
	orange.Print();
}