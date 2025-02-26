#include <iostream>
using namespace std;
class Rectangle {
private:
    double width;
    double height;

public:
    
    Rectangle() : width(0.0), height(0.0) {}

    
    Rectangle(double w, double h) : width(w), height(h) {}

    
    Rectangle(double side) : width(side), height(side) {}

    
    double getArea() const {
        return width * height;
    }
};

int main() {
    
    Rectangle rect1;           
    Rectangle rect2(5.0, 10.0);
    Rectangle rect3(7.0);       

    
    std::cout << "Area of rect1 (default): " << rect1.getArea() << std::endl;
    std::cout << "Area of rect2 (5x10): " << rect2.getArea() << std::endl;
    std::cout << "Area of rect3 (square 7x7): " << rect3.getArea() << std::endl;

    return 0;
}
