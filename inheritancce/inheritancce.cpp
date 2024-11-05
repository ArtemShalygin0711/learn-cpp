// inheritancce.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Animal {
	string word;
public:
	Animal(string w) :word(w) {};
	void Say() { cout << word; }
};

class Raven : public Animal {
public:
	Raven() :Animal("Carrr") {};
};

class Dog : public Animal {
public:
	Dog() : Animal("Gaw") {};
};

class Cat : public Animal {
public:	
	Cat() :Animal("Meow") {};
};




int main() {
	// ult vjz cj,frf?
	Raven raven = Raven();
	Dog dog = Dog();
	Cat cat = Cat();

	dog.Say();
}