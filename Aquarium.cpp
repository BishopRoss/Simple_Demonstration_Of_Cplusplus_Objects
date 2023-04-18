#include "Aquarium.h"

Aquarium::Aquarium()
{
	volume = 0;
	fishCount = 0;
}

Aquarium::Aquarium(int vol, int count, Fish schl[])
{
	volume = vol;
	fishCount = count;
	for (int i = 0; i < fishCount; i++)
		school[i] = schl[i];
}



void Aquarium::displayInfo()
{
	cout << "This is an aquarium that holds " << volume << " gallons" << endl;
	cout << "There are the fish: " << endl;
	for (int i = 0; i < fishCount; i++) {
		school[i].displayFishInfo();
	}
		
	
}

void Aquarium::setVolume(int vol) { volume = vol; }
int Aquarium::getVolume() { return volume; }
void Aquarium::setCount(int count) { fishCount = count; }
int Aquarium::getCount() { return fishCount; }

void Aquarium::setSchool(Fish schl[])
{
	for (int i = 0; i < fishCount; i++)
		school[i] = schl[i];
}

Fish * Aquarium::getSchool() { return &school[0]; }
