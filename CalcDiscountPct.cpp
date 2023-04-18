#include "CalcDiscountPct.h"



CalcDiscountPct::CalcDiscountPct(int age, string member)//constructor
{
	setAge(age);
	setMember(member);
}


CalcDiscountPct::~CalcDiscountPct()//destructor
{
}

int CalcDiscountPct::getAge()//retrieves the object's age
{
	return age;
}

void CalcDiscountPct::setAge(int age)//sets the object's age
{
	if (age > 0)
		this->age = age;
	else
		this->age = 0;
}

string CalcDiscountPct::getMember()//retrieves the object's member status
{
	return AARPmember;
	
}
void CalcDiscountPct::setMember(string member)//sets the object's member status
{
	if (member == "yes") 
		AARPmember = member;

	else 
		AARPmember = "no";
		
}

double CalcDiscountPct::getDiscount()//determines the discount based off age and member status
{
	if (age < 21)
		return 0.05;
	else if (age > 21 && age < 39)
		return 0;
	else if (age > 40 && age < 64)
		return 0.08;
	else 
		if (AARPmember == "no") 

			return 0.10;
		
		else 
			
			return 0.12;
		
	
			
}

