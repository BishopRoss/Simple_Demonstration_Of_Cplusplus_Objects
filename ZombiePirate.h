#pragma once
#include "Pirate.h"
class ZombiePirate :
	public Pirate
{
private:
	short brainHunger;
public:
	//constructors
	ZombiePirate();
	ZombiePirate(string n, short bh);

	//accessors and mutators
	string speak();
	string toString();
	short getBrainHunger();
	void setBrainHunger(short bh);

};

