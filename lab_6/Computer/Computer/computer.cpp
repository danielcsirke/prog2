#include "computer.h"
#include <iostream>

// úgy kell kezelni, mintha egy globális változó lenne, itt kell memóriát foglalni
// neki mint egy globális változónak, de nem lesz globális a h fileban meagott adatok alapján
unsigned Computer::nextId = 0;

Computer::Computer() :  id(nextId), clockSpeed(0) {
	nextId++;
}

Computer::Computer(const Computer& theOther): id(nextId), clockSpeed(theOther.clockSpeed) {
	nextId++;
}

unsigned Computer::getClockSpeed() const {
	return clockSpeed;
}

void Computer::print() const {
	std::cout << "id: " << id << "clock speed: " << getClockSpeed() << std::endl;
}

void friendlyPrint(const Computer& c) {
	std::cout << "id: " << c.getId() << "clock speed: " << c.getClockSpeed() << std::endl;
}
const unsigned Computer::getId() const {
	return id;
}