#include "Stack.h"

Stack::Stack() {
	elements = 0;
	pData = nullptr;
}

Stack::Stack(Stack& theOther) {
    elements = theOther.elements;
    if (theOther.elements > 0) {
        pData = new int[theOther.elements];
    }
    for (int i = 0; i < theOther.elements; i++) {
        pData[i] = theOther.pData[i];
    }
}


Stack::~Stack() {
    while (elements > 0) {
        pop();
    }
    pData = nullptr;
}

int Stack::pop() {
    
}

/*
* 
* 


*/





/*
VÁLTOZÓ FOGLALÁSA ESETÉN: 


#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;  // Allocates memory for a single integer

    *ptr = 10;  // Assign a value to the allocated memory
    cout << "Value: " << *ptr << endl;

    delete ptr;  // Free the allocated memory
    return 0;
}


TÖMB FOGLALÁSA ESETÉN: 

#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5];  // Allocates an array of 5 integers


    // Assign values
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
    }

    // Print values
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;  // Free the allocated memory for the array
    return 0;
}




*/