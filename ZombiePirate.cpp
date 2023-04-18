#include "ZombiePirate.h"



ZombiePirate::ZombiePirate()
{
	brainHunger = 0;
}


ZombiePirate::ZombiePirate(string n, short bh):Pirate(n), brainHunger(bh)
{
}

string ZombiePirate::speak()
{
	switch (brainHunger)

	{

	case 0:

		return "Yum. I just ate a brain!";

		break;

	case 1:

		return "I'm getting a little hungry... Are there any brains out there?";

		break;

	case 2:
		return "I'm getting hungrier, where are the brains?";

		break;

	case 3:

		return "I'm getting very hungry!! I need a brain to eat!!";

		break;

	case 4:
		return "If I don't get a brain to eat soon I am going to lose my mind!";

		break;

	case 5:

		return "BRAINS!!!! GIVE ME BRAINS NOW!!! I NEED TO EAT BRAINS NOW!!!";

		break;

	default:

		return "Error. Something went wrong.";

		break;

	}
}

string ZombiePirate::toString()
{
	return Pirate::toString() + " brain hunger:" + to_string((short)brainHunger);
}

short ZombiePirate::getBrainHunger()
{
	return brainHunger;
}

void ZombiePirate::setBrainHunger(short bh)
{
	brainHunger = bh;
}
