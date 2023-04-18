#include <iostream>
#include "Vessel.h"
#include "Sailboat.h"
#include"Powerboat.h"
using namespace std;
/*
	   Program: Vessel Inheritance Hierarchy
	   Programmer: Your Name
	   Date:
	   Purpose: Demonstrate classes related by inheritance. The base class is Vessel. Two
	   more specific classes inherit from Vessel: Sailboat and Powerboat.
*/

int main()
{
	Sailboat sBoat1("Fiberglass", "sails and motor", 40, 24, 1, 1);
	sBoat1.printInfo();
	Powerboat pBoat1("Fiberglass", "Diesel Engine", 54, 16, "Inboard Engine", 1);
	pBoat1.printInfo();
	
	system("pause");
	return 0;
}