#pragma once
#include <iostream>

class Product {
private:
    //?? totalProducts;
    //?? MAX_PRICE = 5000.0;  // maximum �r
    //?? id;
    //?? name;
    //?? price;

public:
    Product(int pid, const std::string& pname, double pprice);

    ~Product();

    // ?? getTotalProducts(); //Objektumt�l f�ggetlen�l visszaadja a darabsz�mot

    // ?? getMaxPrice(); //A max lehets�ges �r, sosem v�ltozik

    // ?? getId() 

    //?? getName() 

    // ?? getPrice() 

    // ?? printDetails() 
};
