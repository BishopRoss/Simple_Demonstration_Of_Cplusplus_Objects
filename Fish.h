#pragma once
#include<iostream>
#include<string>
using namespace std;

class Fish
{
private: 
	string species, type;
	
public:
	//constructors
	Fish(string spec="unknown", string tp="unknown");

	//accessor and mutators 
	void setSpecies(string spec);
	string getSpecies();
	void setType(string tp);
	string getType();
	void displayFishInfo();
};

