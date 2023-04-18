/*
Program: Calculate a Discount Percentage
Programmer: Bishop Ross
Date: 11/13/2019
Purpose: Demonstrate writing a simple class that calculates a discount percentage
based on age and whether the person is an AARP member.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include "CalcDiscountPct.h"
using namespace std;

int main()
{
	CalcDiscountPct person1;

	person1.setAge(15);
	person1.setMember("no");
	cout << fixed << setprecision(2);
	cout << "The discount for person aged 15 is: " << person1.getDiscount() << endl << "\n";

	person1.setAge(25);
	person1.setMember("no");
	cout << fixed << setprecision(2);
	cout << "The discount for person aged 25 is: " << person1.getDiscount() << endl << "\n";

	person1.setAge(45);
	person1.setMember("no");
	cout << fixed << setprecision(2);
	cout << "The discount for person aged 45 is: " << person1.getDiscount() << endl << "\n";

	person1.setAge(67);
	person1.setMember("no");
	cout << fixed << setprecision(2);
	cout << "The discount for person aged 67, non-AARP member, is: " << person1.getDiscount() << endl << "\n";

	person1.setAge(67);
	person1.setMember("yes");
	cout << fixed << setprecision(2);
	cout << "The discount for person aged 67, AARP member, is: " << person1.getDiscount() << endl << "\n";

	CalcDiscountPct person2(55, "yes");
	cout << fixed << setprecision(2);
	cout << "Object with other constructor: " << endl;
	cout << "The discount for person aged 55, AARP member, is: " << person2.getDiscount() << endl;

	system("pause");
	
	return 0;
}