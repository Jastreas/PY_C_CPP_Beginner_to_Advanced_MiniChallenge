#include <cstdio>
#include "Person.h"

int main(){
    Person p1;
    p1.set_age(25);
    std::printf("Person 1 age -> %d\n", p1.get_age());
    return 0;
}