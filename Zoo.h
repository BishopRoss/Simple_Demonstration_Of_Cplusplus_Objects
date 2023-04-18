#pragma once
#include <string>
#include<iostream>
using namespace std;

class Zoo
{
private:
	string zooName; 
	string zooLocation;
	int yearlyVisitors;
	double adultAdmissionCost;
public:
	//constructors
	Zoo(string name="unknown", string place="unknown", int visitors=0, double cost=0);
	~Zoo();

	//accessors and mutators
	string getName();
	void setName(string name);

	string getLoc();
	void setLoc(string place);

	int getVisitors();
	void setVisitors(int visitors);

	double getAdmission();
	void setAdmission(double cost);
	
	void printinfo();

};

