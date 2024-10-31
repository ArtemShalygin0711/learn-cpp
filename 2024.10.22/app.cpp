#include "train.h"

int main() {
	setlocale(LC_ALL, "Russian");

	Train First = Train();
	First.City_to("Москва");
	First.City_From("Череповец");
	First.AmountOfWagons(20);
	cout << "Первый поезд" << "\n";
	First.Print();

	Train Second = Train("Владивосток", "Череповец", 40);
	cout << "\n\n" << "Второй поезд" << "\n";
	Second.Print();
}
