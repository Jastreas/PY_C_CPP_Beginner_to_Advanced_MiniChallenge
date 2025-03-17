#include <iostream>
#include "Coche.h"


int main(){

    Coche toyota_corolla("Toyota Corolla", "Red", 2020, 150000);
    
    std::cout << "Model: " << toyota_corolla.get_model() << std::endl;
    std::cout << "Color: " << toyota_corolla.get_color() << std::endl;
    std::cout << "Year: " << toyota_corolla.get_factory_year() << std::endl;
    std::cout << "Kilometers: " << toyota_corolla.get_kilometers() << std::endl;

    return 0;
}