#include "CaptainPirate.h"



CaptainPirate::CaptainPirate()
{
	pet = "unknown";
}
CaptainPirate::CaptainPirate(string n, string p):Pirate(n), pet(p)
{
}

string CaptainPirate::speak()
{
	return "Yaaarrr! It be a " + pet + "! Yaarrr Scallywags, swab that poop deck!";
}
string CaptainPirate::toString()
{
	return Pirate::toString() + " pet: " + pet;
}

string CaptainPirate::getPet() { return pet; }
void CaptainPirate::setPet(string p) { pet = p; }

