#pragma once
#include <stdio.h>

class Computer
{
	static unsigned nextId;
	const unsigned id;
	unsigned clockSpeed;
public:
	Computer();
	Computer(const Computer&); // kötelező bele a const másképpen nem működik konstanson!!
	unsigned getClockSpeed()const;
	const unsigned getId()const;
	void print() const;
	friend void friendlyPrint(const Computer&);
};

void friendlyPrint(const Computer&);
