//1-2 строки: добавление библиотек
#include <iostream>
#include <string>

using namespace std;
//7-15 строки: создание класса Number и описание его метода, сеттера и геттера и конструктора и деструктораю. Класс хранит в стебе переменнную mValue типа int
class Number {
	int mValue = 0;
public:
	void Numb(int Value) { mValue = Value; }
	int Numb() { return mValue; }
	void Print();
	Number(int value):mValue(value) {};
	~Number() {};
};
//метод класса Number
void Number::Print() {
	cout << mValue;
}
// функция Print, которая принимает на вход переменную типа класса Number и запускает метод класса Number
void Print(Number n) {
	n.Print();
}

//функция main
int main() {
	
	Number numb = Number(15);

	Print(numb);
}