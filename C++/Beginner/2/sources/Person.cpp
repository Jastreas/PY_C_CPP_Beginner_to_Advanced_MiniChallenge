#include "Person.h"

Person::Person() : age {0}{}

int Person::get_age(){
    return age;
}

void Person::set_age(int age){
    this->age = age;
}