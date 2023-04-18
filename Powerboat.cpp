#include "Powerboat.h"


Powerboat::Powerboat()
{
	engineType = "unknown";
	numEngines = 0;
}

Powerboat::Powerboat(string material , string power , int length , int width ,
	string engType , int numEngs):Vessel(material, power,length, width), engineType(engType),
	numEngines(numEngs)
{}

void Powerboat::setType(string engType) { engineType = engType; }
string Powerboat::getType() { return engineType; }

void Powerboat::setNumEngs(int numEngs) { numEngines = numEngs; }
int Powerboat::getNumEngs() { return numEngines; }


void Powerboat::printInfo()
{
	Vessel::printInfo();
	cout << "This is a powerboat that has " << numEngines << " " << engineType << " engines."<<endl;
	cout << endl;
}



