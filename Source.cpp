#include "Aquarium.h"
using namespace std;

/*
	 Program: Composition
	 Programmer: Bishop Ross
	 Purpose: To practice composition              
*/

int main()
{
	int volume, fishCount;
	string species, type;
	Fish school1[25];
	Aquarium aqu1 ;
	
	cout << "Welcome. Prepare to enter information about an Aquarium" << endl;
	cout << endl;
	cout << "Please enter the volume of the aquarium in gallons: ";
	cin >> volume;
	cin.ignore();
	aqu1.setVolume(volume);
	cout << "Please enter the number of species of fish in the tank: ";
	cin >> fishCount;
	cin.ignore();
	aqu1.setCount(fishCount);
	for (int i = 0; i < fishCount; i++) {
		cout << "Enter the species name: ";
		getline(cin, species);
		school1[i].setSpecies(species);
		cout << "Enter whether or not this is freshwater or saltwater: ";
		getline(cin, type);
		school1[i].setType(type);
		
	}
	cout << endl;
	Aquarium aqu2(volume,fishCount,school1);
	aqu2.displayInfo();
	
	system("pause");
	return 0;
	
}
