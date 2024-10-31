#include "train.h"
#include <iostream>

void Train::City_to(string City_to) { To_City = City_to; }
string Train::City_to() { return To_City; }
void Train::City_From(string City_From) { From_City = City_From; }
string Train::City_From() { return From_City; }
void Train::AmountOfWagons(int Amount) { Amount_Wagons = Amount; }
int Train::AmountOfWagons() { return Amount_Wagons; }
Train::Train() {};
Train::Train(string To = "", string From = "", int Amount = 0) :To_City(To), From_City(From), Amount_Wagons(Amount) {};
Train::~Train() {};




string Train::GetString() {

	return "����� o����������: " + From_City + "\n" + "����� ��������: " + To_City + "\n" + "���������� ������� ������: " + to_string(Amount_Wagons);
}

void Train::Print() {
	cout << GetString();
}