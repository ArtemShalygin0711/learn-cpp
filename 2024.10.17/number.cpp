//1-2 ������: ���������� ���������
#include <iostream>
#include <string>

using namespace std;
//7-15 ������: �������� ������ Number � �������� ��� ������, ������� � ������� � ������������ � ������������. ����� ������ � ����� ����������� mValue ���� int
class Number {
	int mValue = 0;
public:
	void Numb(int Value) { mValue = Value; }
	int Numb() { return mValue; }
	void Print();
	Number() {};
	~Number() {};
};
//����� ������ Number
void Number::Print() {
	cout << mValue;
}
// ������� Print, ������� ��������� �� ���� ���������� ���� ������ Number � ��������� ����� ������ Number
void Print(Number n) {
	n.Print();
}

//������� main
int main() {
	Number numb = Number();
	Print(numb);
}