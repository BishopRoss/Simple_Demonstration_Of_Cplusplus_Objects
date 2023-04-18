#pragma once
#include<iostream>
#include<string>
using namespace std;

class Pirate
{
protected: 
	string name;
public:
	//constructors
	Pirate();
	Pirate(string n);

	//accessors and mutators
	virtual string speak() = 0;//nothing in the code file, pure virutal
	virtual string toString();//has info in the code file, regular virtual 
	string getName();
	void setName(string n);

};

