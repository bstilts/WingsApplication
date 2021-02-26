/*
Nicholas White
CEIS247C
Week 3 Lab
*/

#include <iostream>
#include <string>
#include <conio.h>
#include "Wings.h"
using namespace std;

/// Entry point to application
int main()
{
	//create two wings objects
	Wings w1("honey hot", 6);
	Wings w2("BBQ", 6);

	Wings w3 = w1 + w2;
	cout << "Combined wings: " << w3.getflavor() << ", " << w3.getNumberOfPieces() << endl;

	Wings w4 = w3 - w2;

	cout << "Small wings: " << w4.getflavor() << ", " << w4.getNumberOfPieces() << endl;
	Wings w5 = -w4;

	cout << "Negated wings: " << w5.getflavor() << ", " << w5.getNumberOfPieces() << endl;

	w5 = -w5;
	++w5;
	cout << "pre-Incremented wings:" << w5.getflavor() << ", " << w5.getNumberOfPieces() << endl;

	w5++;

	cout << "post-increment wings: " << w5.getflavor() << ", " << w5.getNumberOfPieces() << endl;

	Wings w6 = w5;
	cout << "equal wings: " << w6.getflavor() << ", " << w6.getNumberOfPieces() << endl;

	Wings w7;
	cin >> w7;

	cout << "Input stream wings" << w6.getflavor() << ", " << w6.getNumberOfPieces() << endl;
	cout << "output stream wings: " << w7 << endl;

	//pause
	cout << "\nPess any key to continue...";
	_getch();

	return 0;
};
