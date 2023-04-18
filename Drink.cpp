#include "Drink.h"

Drink::Drink(string type) {
	setType(type);
}

Drink::~Drink() {
}

string Drink::getType() {
	return drinkType;
}

void Drink::setType(string tp) {
	drinkType = tp;
}

Drink Drink::operator+(Drink tp2) {
	Drink cocktail;
	
	if (this->drinkType == tp2.drinkType)
		cocktail.drinkType = this->drinkType;
	else if(this->drinkType == "vodka" && tp2.drinkType == "orange juice")
		cocktail.drinkType = "screwdriver";
	else if (this->drinkType == "orange juice" && tp2.drinkType == "vodka")
		cocktail.drinkType = "screwdriver";
	else if (this->drinkType == "gin" && tp2.drinkType == "vermouth")
		cocktail.drinkType = "martini";
	else if (this->drinkType == "vermouth" && tp2.drinkType == "gin")
		cocktail.drinkType = "martini";

	return cocktail;
	
}
ostream& operator<<(ostream& output, const Drink& drk) {
	output << drk.drinkType;
	return output;
}






