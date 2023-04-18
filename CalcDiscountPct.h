#pragma once
#include <string>
#include <iostream>
using namespace std;

class CalcDiscountPct
{
private:
	//attributes
	int age;
	string AARPmember;

public:
	//constructors
	CalcDiscountPct(int age=0, string member = "no");
	~CalcDiscountPct();

	//accessors and mutators
	int getAge();
	void setAge(int age);
	
	string getMember();
	void setMember(string member);
	
	double getDiscount();

};

