#pragma once
#include"Vessel.h"
class Powerboat: public Vessel
{
private:
	string engineType;
	int numEngines;
public:
	//constructors
	Powerboat(string material, string power, int length, int width,
		string engType, int numEngs);
	Powerboat();
	//accessors and mutators
	void setType(string engType);
	string getType();
	void setNumEngs(int numEngs);
	int getNumEngs();
	void printInfo();
};

