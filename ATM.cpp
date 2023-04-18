#include "ATM.h"



ATM::ATM(string manu, string mod)
{
	manufacturer = manu;
	model = mod;
}

ATM::~ATM(){}

void ATM::setManufacturer(string manu){manufacturer = manu;}

string ATM::getManufacturer(){return manufacturer;}

void ATM::setModel(string mod){model = mod;}

string ATM::getModel(){return model;}

void ATM::displayATM()
{
	cout << "ATM Information: " << manufacturer << " " << model << endl;
}
