#include "computer.h"
#include <iostream>

// �gy kell kezelni, mintha egy glob�lis v�ltoz� lenne, itt kell mem�ri�t foglalni
// neki mint egy glob�lis v�ltoz�nak, de nem lesz glob�lis a h fileban meagott adatok alapj�n
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