#include "Bank.h"



Bank::Bank(string nam, string addr, Lobby lob)
{
	name = nam;
	address = addr;
	lobby = lob;
}


Bank::~Bank()
{
}

void Bank::setName(string nam) { name = nam; }

string Bank::getName() { return name; }

void Bank::setAddress(string addr) { address = addr; }

string Bank::getAddress() { return address; }

void Bank::setLobby(Lobby lob) { lobby = lob; }

Lobby Bank::getLobby() { return lobby; }

void Bank::displayBank()
{
	cout << "This is information on " << name << ", " << address << endl;
	lobby.displayLobby();
}
