#pragma once

#include<iostream>
#include<string>

using namespace std;

class Train {
	string From_City;
	string To_City;
	int Amount_Wagons;

public:
	void City_to(string);
	string City_to();
	void City_From(string);
	string City_From();
	void AmountOfWagons(int);
	int AmountOfWagons();
	string GetString();
	void Print();
	Train();
	Train(string, string, int);
	~Train();

};