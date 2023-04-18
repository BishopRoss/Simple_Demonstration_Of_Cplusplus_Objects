#pragma once
#include "Pirate.h"
class CaptainPirate :
	public Pirate
{
private:
	string pet;
public:
	//constructors
	CaptainPirate();
	CaptainPirate(string n, string p);

	//accessors and mutators
	string speak();
	string toString();
	string getPet();
	void setPet(string p);

};

