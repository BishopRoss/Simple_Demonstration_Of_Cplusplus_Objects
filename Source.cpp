#include <iostream>
#include <iomanip>
#include "Bank.h"
using namespace std;

/*
	 Program: Using Aggregation/Composition
	 Programmer: Bishop Ross
	 Date: 12/7/2019
	 Purpose: Demonstrate classes related by composition and aggregation; We will code                 a Bank class that contains an object of the Lobby class which contains an object of               the ATM class.
*/

int main()
{
	ATM atm("Genmega", "G2500");
	Lobby lobby(50, 20, 8, atm);
	Bank bank("Bank of America", "2525 Main Street", lobby);
	bank.displayBank();
	


	system("pause");
	return 0;
}