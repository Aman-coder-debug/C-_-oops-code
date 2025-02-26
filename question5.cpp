#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;

public:
    
    Person() : name(""), age(0) {
    cout << "Default constructor called" << endl;
    }

    
    Person(const string& name, int age) : name(name), age(age) {
        cout << "Parameterized constructor called" << endl;
    }

    
    Person(const Person& other) : name(other.name), age(other.age) {
        cout << "Copy constructor called" << endl;
    }

    ~Person() {
        cout << "Destructor called" << endl;
    }

    
    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    
    Person person1;
    person1.display();

    
    Person person2("Alice", 30);
    person2.display();

    
    Person person3 = person2;
    person3.display();


    return 0;
}
