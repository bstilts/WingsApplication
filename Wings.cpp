#include "Wings.h"

//constructors 
Wings::Wings(string flavor, short numberOfPieces)
{
	setFlavor(flavor);
	setNumberOfPieces(numberOfPieces);
}
Wings::~Wings(void)
{
	//no dynamic objectsto destroy
}

//behaviors
Wings Wings::operator+(const Wings secondWings)const
{
	//create wings object to return
	Wings thirdWings;
	//tell c++ to combine wings
	thirdWings.numPieces = this->numPieces + secondWings.numPieces;
	thirdWings.flavor + "and " + secondWings.flavor;
	if (this->flavor != "and" + secondWings.flavor)
		thirdWings.flavor = this->flavor + secondWings.flavor;
	else
		thirdWings.flavor = this->flavor;
	//return new combined wings
	return thirdWings;

}

Wings Wings::operator-(const Wings secondWings) const
{
	return Wings();
}
Wings Wings::operator-(void)
{
	numPieces = -1 * numPieces;
	//flavor =??

	return *this;
}

Wings& Wings::operator++(void)
{
	++numPieces;

	//return incremented pieces
	return *this;
}

Wings Wings::operator++(int)
{
	// save old state
	Wings temp = *this;

	// post increment
	++(*this);

	return temp;

}
Wings& Wings::operator=(const Wings& equalWings)
{
	if (this != &equalWings)
	{
		this->flavor = equalWings.flavor;
		this->numPieces = equalWings.numPieces;
	}
	// return new object
	return *this;
}
istream& operator>>(istream& is, Wings& obj)
{
	cout << "Enter the wings flavor: ";
	getline(is, obj.flavor);
	cout << "Enternumber of wings: ";
	is >> obj.numPieces;

	// return the input
	return is;
}

ostream& operator<<(ostream& os, Wings& obj)
{
	// append our info to current stream
	os << "Wings Flavor: " << obj.flavor << " Number of wings: " << obj.numPieces;

	return os;
}





// accessors and mutators
string Wings::getflavor(void)
{
	return flavor;
}



void Wings::setFlavor(string flavor)
{
	if (flavor.length() > 0)
		this->flavor = flavor;
	else
		this->flavor = "unknown";
}

short Wings::getNumberOfPieces(void)
{
	return numPieces;
}
void Wings::setNumberOfPieces(short numberOfPieces)
{
	if (numberOfPieces > 0)
		numPieces = numberOfPieces;
	else
		numPieces = 0;
}

