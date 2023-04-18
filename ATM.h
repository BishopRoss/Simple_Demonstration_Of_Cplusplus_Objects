#pragma once
#include <iostream>
#include<string>
using namespace std;


class ATM
{
private:
	string manufacturer, model;

public:
	//constructors
	ATM(string manu = "unknown", string mod = "unknown");
	~ATM();

	//accessors and mutators
	void setManufacturer(string manu);
	string getManufacturer();
	void setModel(string mod);
	string getModel();
	void displayATM();
};

