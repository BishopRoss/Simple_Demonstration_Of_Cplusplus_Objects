#include <iostream>
#include<iomanip>
#include <string>
#include "drink.h"

/*
Program: Drink class
Programmer: Bishop Ross
Date:12/5/2019
Purpose: Demonstrate a class with overloaded operators
*/

int main()
{

	Drink drink1, drink2, drink3;

	drink1.setType("vodka");
	drink2.setType("orange juice");
	drink3 = drink1 + drink2;

	cout << "First Drink: " << drink1 << endl;
	cout << "Second Drink: " << drink2 << endl;
	cout << "Mixed Drink: " << drink3 << endl;
	cout << endl;

	drink1.setType("gin");
	drink2.setType("vermouth");
	drink3 = drink1 + drink2;
	cout << "Changing drinks" << endl;
	cout << "First Drink: " << drink1 << endl;
	cout << "Second Drink: " << drink2 << endl;
	cout << "Mixed Drink: " << drink3 << endl;
	cout << endl;
	
	system("pause");
	
	return 0;
}