#include <iostream>
#include <string>

class Calculator {
public:
    
    int compute(int a, int b) {
        return a + b;
    }

    
    double compute(double a, double b) {
        return a + b;
    }

    
    std::string compute(const std::string& a, const std::string& b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    
    int intResult = calc.compute(10, 20);
    std::cout << "Sum of integers: " << intResult << std::endl;

    double doubleResult = calc.compute(10.5, 20.5);
    std::cout << "Sum of doubles: " << doubleResult << std::endl;


    std::string stringResult = calc.compute("Hello, ", "world!");
    std::cout << "Concatenated strings: " << stringResult << std::endl;

    return 0;
}
