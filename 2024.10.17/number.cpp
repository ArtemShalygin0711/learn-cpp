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
int main()
{
	//создание переменной intValue и присвоение ей значения
	int intValue = 10;
	//передача значения переменнной intValue в функцию Print, которая принимает на вход переменную типа класса Number
	// затем в этой функции Print переменная передается в класс и сохраняется в mValue, которая затем выводится на экран с помощью метода класса Number
	Print(intValue);
}