#include <iostream>
#include "Student.h"

int main(){
    
    Student s1("Andreas", 21);
    
    std::cout << "Student: " << s1.get_name() << ", is " << s1.get_age() << " years old!" << std::endl;

    return 0;
}
