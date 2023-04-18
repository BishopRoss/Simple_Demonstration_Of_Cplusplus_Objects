#include "Vessel.h"

Vessel::Vessel()
{
	hullMaterial = "unknown";
	powerSource = "unknown";
	hullLength = 0;
	hullWidth = 0;
}

Vessel::Vessel(string material, string power, int length, int width )
{
	hullMaterial = material;
	powerSource = power;
	hullLength = length;
	hullWidth = width;
}




void Vessel::setMaterial(string material) {hullMaterial = material;}
string Vessel::getMaterial(){return hullMaterial;}

void Vessel::setPower(string power) { powerSource = power; }
string Vessel::getPower() { return powerSource; }

void Vessel::setLength(int length) { hullLength = length; }
int Vessel::getLength() { return hullLength; }

void Vessel::setWidth(int width) { hullLength = width;; }
int Vessel::getWidth() { return hullLength; }

void Vessel::printInfo()
{
	cout << "This is a vessel made from " << hullMaterial << " and powered by " << powerSource <<
		".\nThe hull is " << hullLength << " feet long and " << hullWidth << " feet wide." << endl;
}
