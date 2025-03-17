#include <iostream>
#include <cstdio>
#include "Coche.h"

Coche::Coche(std::string model, std::string color, int factory_year, int kilometers){
    this->model = model;
    this->color = color;
    this->factory_year = factory_year;
    this->kilometers = kilometers;
}

std::string Coche::get_model(){
    return model;
}

std::string Coche::get_color(){
    return color;
}

int Coche::get_factory_year(){
    return factory_year;
}

int Coche::get_kilometers(){
    return kilometers;
}
