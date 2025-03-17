#ifndef COCHE_H
#define COCHE_H
#include <string>

class Coche{
    public:
        Coche(std::string model, std::string color, int factory_year, int kilometers);
        std::string get_model();
        std::string get_color();
        int get_factory_year();
        int get_kilometers();
    protected:
    private:
        std::string model;
        std::string color;
        int factory_year;
        int kilometers;
};

#endif