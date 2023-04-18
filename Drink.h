#pragma once
#include <string>
#include <iostream>
using namespace std;

class Drink
{
private:
	string drinkType;
public:
	//constructors
	Drink(string type = "unknown");
	~Drink();

	//accessors and mutators
	string getType();
	void setType(string tp);
	Drink operator+(Drink tp2);
	friend ostream &operator<<(ostream& output, const Drink& drk);

	
	
};


