#include <iostream>
#include <string>

class Student {
private:
    std::string name;

public:
    void setName(const std::string& studentName) {
        name = studentName;
    }

    void display() const {
        std::cout << "Student Name: " << name << std::endl;
    }
};

int main() {
    Student student1;
    student1.setName("Shruti");
    student1.display();

    Student student2;
    student2.setName("Rahul");
    student2.display();

    return 0;
}