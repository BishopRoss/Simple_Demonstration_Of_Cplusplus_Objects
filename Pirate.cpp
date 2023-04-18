#include "Pirate.h"

Pirate::Pirate(string n)
{
	name = n;
}

Pirate::Pirate()
{
	name = "unknown";
}


string Pirate::toString()
{
	return "Name is " + name + "\n";
}

string Pirate::getName()
{
	return name;
}

void Pirate::setName(string n)
{
	name = n;
}



