#include "train.h"

int main() {
	setlocale(LC_ALL, "Russian");

	Train First = Train();
	First.City_to("������");
	First.City_From("���������");
	First.AmountOfWagons(20);
	cout << "������ �����" << "\n";
	First.Print();

	Train Second = Train("�����������", "���������", 40);
	cout << "\n\n" << "������ �����" << "\n";
	Second.Print();
}
