#ifndef STUDENT_H
#define STUDENT_H
#include <string>

class Student{
    public:
        Student(std::string name, int age);
        std::string get_name();
        int get_age();
    private:
        std::string name;
        int age;
};

#endif
