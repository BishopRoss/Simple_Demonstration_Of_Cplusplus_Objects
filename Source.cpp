/*
	   Program: Exercise 6 Pirate Program
	   Programmer: Bishop Ross
	   Date:12/15/2019
	   Purpose: To practice using an abstract parent class.
*/
#include"Pirate.h"
#include "ZombiePirate.h"
#include"CaptainPirate.h"
using namespace std;
  
int main()
{
	Pirate* pirates[3];
	pirates[0] = new CaptainPirate("Jack", "Parrot");
	pirates[1] = new ZombiePirate("Zombie Bob", 3);
	pirates[2] = new CaptainPirate("Edward", "Monkey");
	for (int i=0; i < 3; i++) {
		cout << "Pirate number " << int(i+1) << endl;
		cout << pirates[i]->speak() << endl;
		cout << pirates[i]->toString() << endl;
		cout << endl;

	}
	for (int i = 0; i < 3; i++) {
		delete pirates[i];
	}


	system("pause");
	return 0;
}