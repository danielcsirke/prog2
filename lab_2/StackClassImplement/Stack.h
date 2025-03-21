#pragma once

class Stack {
private:
	int elements;
	int* pData;
public:
	Stack();
	Stack(Stack& theOther);
	~Stack();
	void push(int);
	int pop();

	void setElements(int);
	void setpData(int*);

	int getElements();
	int getpData();

	void print();
};

