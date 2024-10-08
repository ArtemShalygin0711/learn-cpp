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
	}
	if (ElementaryFloor > EndedFloor) {
		while (ElementaryFloor != EndedFloor) {
			cout << ElementaryFloor - 1 << " этаж" << "\n";
			ElementaryFloor -= 1;
		}
	}
	return 0;
}


int main() {

	setlocale(LC_ALL, "");
	int LFloor, HFloor;
	while (true) {
		cout << "На каком вы этаже?" << "\n";
		cin >> LFloor;
		cout << "На какой этаж вам нужно?" << "\n";
		cin >> HFloor;
		
		Elevator elevator = Elevator(HFloor, LFloor);
		elevator.WhichFloor(LFloor, HFloor);
	}
	
}