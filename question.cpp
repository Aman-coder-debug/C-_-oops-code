#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name; 

public:
    void setName(string name); 
    void display(); 
};

void Student::setName(string name) {
    this->name = name;
}


void Student::display() {
    cout << "Student's Name: " << name << std::endl;
}

int main() {
    Student student;
    student.setName("Shruti");
    student.display();
    return 0;
}
