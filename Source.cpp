/*
 Programmer Name: Bishop Ross
 Program: Zoo Class
 Purpose: Demonstrate coding a simple class and creating objects from it.
*/

#include <iostream>
#include <string>
#include<iomanip>
#include "Zoo.h"
using namespace std;

int main()
{
	string name, location;
	int numVisitors;
	double adultAdmissionCost;
	Zoo zoo1, zoo2;

	
	zoo1.setName("Brookfield Zoo");
	zoo1.setLoc("Chicago, IL");
	zoo1.setVisitors(32510);
	cout << fixed << setprecision(2);
	zoo1.setAdmission(15.50);
	zoo1.printinfo();

	cout << "Please enter zoo name: ";
	getline(cin, name);
	cout << "Please enter zoo city and state: ";
	getline(cin, location);
	cout << "Please enter the number of annual visitors (without commas): ";
	cin >> numVisitors;
	cout << "Please enter the cost of admission for an adult: ";
	cin >> adultAdmissionCost;
	cout << "\n";

	zoo2.setName(name);
	zoo2.setLoc(location);
	zoo2.setVisitors(numVisitors);
	cout << fixed << setprecision(2);
	zoo2.setAdmission(adultAdmissionCost);
	zoo2.printinfo();

	system("pause");
	return 0;
}
