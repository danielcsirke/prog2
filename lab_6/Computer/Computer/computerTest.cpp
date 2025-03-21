#include "computer.h"

int main()
{

	const Computer c1; // default konstruktor
	Computer c2 = c1; // másoló konstruktor

	c1.print();
	c2.print();

	friendlyPrint(c1);
	friendlyPrint(c2);
	
	// Ügyelj arra, hogy ez ne működjön! - SOLVED - DOESN'T WORK 
	// c2.getClockSpeed() = 1000;

	return 0;
}