#pragma once
#include"Vessel.h"
class Sailboat : public Vessel
{
private:
	int numMasts, numHulls;
public:
	//constructors
	Sailboat(string material , string power , int length , int width ,
		int masts , int hulls );
	Sailboat();

	//accessors and mutators

	void setMasts(int masts);
	int getMasts();
	void setHulls(int hulls);
	int getHulls();
	void printInfo();
};

