#ifndef PERSON_H
#define PERSON_H

class Person{
    public:
        Person();
        int get_age();
        void set_age(int age);
    protected:
    private:
        int age;
};

#endif