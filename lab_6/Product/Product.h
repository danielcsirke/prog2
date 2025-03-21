#pragma once
#include <iostream>

class Product {
private:
    //?? totalProducts;
    //?? MAX_PRICE = 5000.0;  // maximum ár
    //?? id;
    //?? name;
    //?? price;

public:
    Product(int pid, const std::string& pname, double pprice);

    ~Product();

    // ?? getTotalProducts(); //Objektumtól függetlenül visszaadja a darabszámot

    // ?? getMaxPrice(); //A max lehetséges ár, sosem változik

    // ?? getId() 

    //?? getName() 

    // ?? getPrice() 

    // ?? printDetails() 
};
