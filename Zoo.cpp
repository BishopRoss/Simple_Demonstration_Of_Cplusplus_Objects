#include "Zoo.h"



Zoo::Zoo(string name, string place, int visitors, double cost)
{
	setName(name);
	setLoc(place);
	setVisitors(visitors);
	setAdmission(cost);
}


Zoo::~Zoo()
{
}

string Zoo::getName()
{
	return zooName;
}
void Zoo::setName(string name)
{
	if (name.length() > 0)
		zooName = name;
	else
		zooName = "unknown";
}

string Zoo::getLoc()
{
	return zooLocation;
}

void Zoo::setLoc(string place)
{
	if (place.length() > 0)
		zooLocation = place;
	else
		zooLocation = "unknown";
}

int Zoo::getVisitors()
{
	return yearlyVisitors;
}

void Zoo::setVisitors(int visitors)
{
	if (visitors > 0)
		yearlyVisitors = visitors;
	else
		yearlyVisitors = 0;
}

double Zoo::getAdmission()
{
	return adultAdmissionCost;
}

void Zoo::setAdmission(double cost)
{
	if (cost > 0)
		adultAdmissionCost = cost;
	else
		adultAdmissionCost = 0;
}

void Zoo::printinfo()
{
	cout << "The "<< zooName<< " is located in " << zooLocation << endl;
	cout <<"The yearly number of visitors is "<< yearlyVisitors << endl;
	cout << "The adult admission cost is $"<< adultAdmissionCost << endl<<"\n";
}

