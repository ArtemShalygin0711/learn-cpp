#include <iostream>
#include <string>

using namespace std;

class Elevator {
	int HigherFloor;
	int LowerFloor;

public:
	string GetString();
	void Print();
	void SetHigherFloor(int floor) { HigherFloor = floor; }
	string SetHigherFloor() { return "HigherFloor"; }
	void SetLowerFloor(int floor) { LowerFloor = floor; }
	string SetLowerFloor() { return "LowerFloor"; }

	Elevator(int HFloor = 0, int LFloor = 0) : HigherFloor(HFloor), LowerFloor(LFloor) {};
	~Elevator() {};
};

string Elevator::GetString() {
	return " | HigherFloor: " + to_string(HigherFloor) + "\n" + " | LowerFloor: " + to_string(LowerFloor) + "\n";
}

void Elevator::Print() {
	cout << GetString();
}

int main() {
	Elevator elevator = Elevator(10, 1);
	elevator.Print();
}