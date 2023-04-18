#include "Fish.h"



Fish::Fish(string spec, string tp)
{
	species = spec;
	type = tp;
}


void Fish::setSpecies(string spec) { species = spec; }

string Fish::getSpecies() { return species; }

void Fish::setType(string tp) { type = tp; }

string Fish::getType() { return type; }

void Fish::displayFishInfo()
{
	cout << "Fish: " << species << "; Type: " << type << endl;
}
