#pragma once

#include <string>
#include <iostream>
using namespace std;

class Wings
{
private:
	// attributes
	string flavor;
	short numPieces;

public:
	//constructors 
	Wings(string flavor = "unknown", short numberOfPieces = 0);
	~Wings(void);
	//behaviors
	Wings operator+(const Wings secondWings)const;     //wings3 = wings1 + wings2;
	Wings operator-(const Wings secondWings)const;     // wings3 = wings - 
	Wings operator - (void);                           //  
	Wings& operator++(void);
	Wings operator++(int);                            // wings ++            
	Wings& operator=(const Wings& equalWings);


	//overload input stream operator
	// cin >> wings;
	friend istream& operator>>(istream& is, Wings& obj);

	//overload output
	//cout wings
	friend ostream& operator<<(ostream& os, Wings& obj);

	// accessors and mutators
	string getflavor(void);
	void setFlavor(string flavor);

	short getNumberOfPieces(void);
	void setNumberOfPieces(short numberOfPieces);


};
