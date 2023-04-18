#pragma once
#include "ATM.h"
using namespace std;

class Lobby
{
private:
	double length, width, height;
	ATM atm1;
public:
	//constructors
	Lobby(double len=0, double wid=0,double hei=0, ATM atm= ATM());  
	~Lobby(); 

	//accessors and mutators
	void setLength(double len);
	double getLength();
	void setWidth(double wid);
	double getWidth();
	void setHeight(double hei);
	double getHeight();
	void setATM(ATM atm);
	ATM getATM();
	void displayLobby(); //reports volume in cubic feet; calls displayATM()
};

