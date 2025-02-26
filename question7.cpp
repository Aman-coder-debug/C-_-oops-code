#include <iostream>
#include <cmath>
using namespace std;
class Circle {
private:
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    double getArea() const {
        return M_PI * radius * radius;
    }
};

class Counter {
private:
    static int count;

public:
    Counter() {
        count++;
    }

    static int getCount() {
        return count;
    }
};

int Counter::count = 0; 

int main() {
    Circle circle1(5.0);
    Circle circle2(3.0);

    cout << "Area of circle1: " << circle1.getArea() << std::endl;
    cout << "Area of circle2: " << circle2.getArea() << std::endl;

    Counter counter1;
    Counter counter2;
    Counter counter3;

    cout << "Number of Counter objects created: " << Counter::getCount() << std::endl;

    return 0;
}
