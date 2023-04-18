#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vessel
{
protected:
	//wood, fiberglass, steel, etc.,sails, motor, oars, etc.,length and width measured  in feet
	string hullMaterial, powerSource ;
	int hullLength, hullWidth;

public:
	//constructors
	Vessel(string material, string power, int length, int width);
	Vessel();

	//accessors and mutators
	void setMaterial(string material);
	string getMaterial();
	void setPower(string power);
	string getPower();
	void setLength(int length);
	int getLength();
	void setWidth(int width);
	int getWidth();
	void printInfo();
};

