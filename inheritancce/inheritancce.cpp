// inheritancce.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Animal {
	string word;
	
public:
	Animal() {};
	Animal(string w) :word(w) {};
	void Say() { cout << word; }
};

class Raven : public Animal {
	string name;
public:
	void SetNameRaven(string nraven) { name = nraven; }
	string GetNameRaven() { return name; }
	Raven() :Animal("Carrr") {};
};

class Dog : public Animal {
	string name;
public:
	void SetNameDog(string ndog) { name = ndog; }
	string GetNameDog() { return name; }
	Dog() : Animal("Gaw") {};
};

class Cat : public Animal {
	string name;
public:	
	void SetNameCat(string ncat) { name = ncat; }
	string GetNameCat() { return name; }
	Cat() :Animal("Meow") {};
};

void Say(Animal* n) {
	n->Say();
}


int main() {
	string name;
	Animal n = Animal();
	Raven raven = Raven();
	Raven* ravenPointer = new Raven();
	Dog dog = Dog();
	Dog* dogPointer = new Dog();
	Cat cat = Cat();
	Cat* catPointer = new Cat();

	cout << "write ravens name: ";
	cin >> name;
	raven.SetNameRaven(name);
	cout << "write dogs name: ";
	cin >> name;
	dog.SetNameDog(name);
	cout << "write cats name: ";
	cin >> name;
	cat.SetNameCat(name);

	


	cout << "\n" << raven.GetNameRaven() << " said: ";
	Say(ravenPointer);
	cout << "\n" << dog.GetNameDog() << " said: ";
	Say(dogPointer);
	cout << "\n" << cat.GetNameCat() << " said: ";
	Say(catPointer);
}