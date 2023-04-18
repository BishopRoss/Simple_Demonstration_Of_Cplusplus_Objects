#include "Lobby.h"



Lobby::Lobby(double len, double wid, double hei, ATM atm)
{
	length = len;
	width = wid;
	height = hei;
	atm1 = atm;
}


Lobby::~Lobby(){}

void Lobby::setLength(double len) { length = len; }

double Lobby::getLength() { return length; }

void Lobby::setWidth(double wid) { width = wid; }

double Lobby::getWidth() { return width; }

void Lobby::setHeight(double hei) { height = hei; }

double Lobby::getHeight() { return height; }

void Lobby::setATM(ATM atm) { atm1 = atm; }

ATM Lobby::getATM() { return atm1; }

void Lobby::displayLobby()
{
	double cubicft;
	cubicft = (length*width*height);

	cout << "The lobby is " << cubicft << " cubic feet." << endl;
	cout << "It has an ATM: ";
	atm1.displayATM();

}
