#pragma once
#include "Fish.h"
class Aquarium
{
private:
	int volume, fishCount;
public:
	Fish school[25];

	//constructors
	Aquarium();
	Aquarium(int vol, int count, Fish schl[]);
	

	//accessors and mutators
	void displayInfo();
	void setVolume(int vol);
	int getVolume();
	void setCount(int count);
	int getCount();
	void setSchool(Fish schl[]);
	Fish* getSchool();
};

