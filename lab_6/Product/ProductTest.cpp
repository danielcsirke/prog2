#include <iostream>
#include <string>
#include "Product.h"


// Ne feledd: esetleges statikus v�ltoz� inicializ�l�sa


int main() {
    const Product p1(1, "Tej", 1500.0);
    const Product p2(2, "Kenyer", 2300.0);
    const Product p3(3, "Vaj", 5200.0);  // Az �r a megengedett maximumra, pl 5000 Ft-ra korl�toz�djon

    std::cout << "Termekek listaja:\n";
    p1.printDetails();
    p2.printDetails();
    p3.printDetails();

    std::cout << "Osszes termek szama: " << Product::getTotalProducts() << std::endl;
    std::cout << "Maximalis arhatar: " << Product::getMaxPrice() << " Ft" << std::endl;

    return 0;
}
