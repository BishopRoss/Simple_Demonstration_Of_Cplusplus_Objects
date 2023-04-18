#include "Sailboat.h"

Sailboat::Sailboat():Vessel()
{
	numMasts = 0;
	numHulls = 0;
}

Sailboat::Sailboat(string material , string power , int length , int width,
	int masts , int hulls ):Vessel(material, power, length, width), numMasts(masts),
	numHulls(hulls)
{}

void Sailboat::setMasts(int masts) { numMasts = masts; }
int Sailboat::getMasts() { return numMasts; }

void Sailboat::setHulls(int hulls) { numHulls = hulls; }
int Sailboat::getHulls() { return numHulls; }

void Sailboat::printInfo()
{
	Vessel::printInfo();
	cout << "This is a sailboat with " << numMasts << " masts and " << numHulls << " hulls." << endl;
	cout << endl;
}



