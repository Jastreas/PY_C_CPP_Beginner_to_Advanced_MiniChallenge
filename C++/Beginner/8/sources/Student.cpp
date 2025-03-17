#include "Student.h"

Student::Student(std::string name, int age){
    this->name = name;
    this->age = age;
}

std::string Student::get_name(){ return name; }

int Student::get_age(){ return age; }