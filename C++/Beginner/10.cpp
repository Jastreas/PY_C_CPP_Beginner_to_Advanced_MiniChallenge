#include <iostream>

class Vector {
private:
    double x, y;

public:
    Vector(double x = 0, double y = 0) : x(x), y(y) {}

    Vector operator+(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }

    friend std::ostream& operator<<(std::ostream& os, const Vector& v);
};

std::ostream& operator<<(std::ostream& os, const Vector& v) {
    os << "(" << v.x << ", " << v.y << ")";
    return os;
}

int main() {
    Vector v1(2, 3);
    Vector v2(5, 7);
    Vector result = v1 + v2;

    std::cout << "v1: " << v1 << std::endl;
    std::cout << "v2: " << v2 << std::endl;
    std::cout << "Sum: " << result << std::endl;

    return 0;
}
