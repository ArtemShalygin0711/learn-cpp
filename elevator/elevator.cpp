#include <iostream>
#include <string>

using namespace std;

class Elevator {
	int HigherFloor;
	int LowerFloor;

public:
	int WhichFloor(int ElementaryFloor, int EndedFloor);
	void SetHigherFloor(int floor) { HigherFloor = floor; }
	string SetHigherFloor() { return "HigherFloor"; }
	void SetLowerFloor(int floor) { LowerFloor = floor; }
	string SetLowerFloor() { return "LowerFloor"; }

	Elevator(int HFloor = 0, int LFloor = 0) : HigherFloor(HFloor), LowerFloor(LFloor) {};
	~Elevator() {};
};

int Elevator::WhichFloor(int ElementaryFloor, int EndedFloor) {
	if (ElementaryFloor < EndedFloor) {
		while (ElementaryFloor != EndedFloor) {
			cout << ElementaryFloor + 1 << " этаж" << "\n";
			ElementaryFloor += 1;
		}
		cout << "Вы приехали!" << "\n";
	}
	else if (ElementaryFloor > EndedFloor) {
		while (ElementaryFloor != EndedFloor) {
			cout << ElementaryFloor - 1 << " этаж" << "\n";
			ElementaryFloor -= 1;
		}
		cout << "Вы приехали!" << "\n";
	}
	else if (ElementaryFloor == EndedFloor) {
		cout << "Вы и так на " << ElementaryFloor << " этаже." << "\n" << "Вам некуда ехать." << "\n";
	}
	return 0;
}


int main() {

	setlocale(LC_ALL, "");
	int LFloor, HFloor;
	while (true) {
		cout << "На каком вы этаже?" << "\n";
		while (!(cin >> LFloor)) {
			cout << "Неправильный ввод, введите верно: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		cout << "На какой этаж вам нужно?" << "\n";
		while (!(cin >> HFloor)) {
			cout << "Неправильный ввод, введите верно: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		
		Elevator elevator = Elevator(HFloor, LFloor);
		elevator.WhichFloor(LFloor, HFloor);
	}
	
}