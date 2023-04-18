#pragma once
#include "Lobby.h"
using namespace std;

class Bank
{
private:
	string name, address;
	Lobby lobby;
public:
	//constructors
	Bank(string nam= "unknown", string addr="unknown", Lobby lob=Lobby());
	~Bank();

	//accessors and mutators
	void setName(string nam);
	string getName();
	void setAddress(string addr);
	string getAddress();
	void setLobby(Lobby lob);
	Lobby getLobby();
	void displayBank();
};

