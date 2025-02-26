
#include <iostream>
using namespace std;
int count = 100;

class Counter {
private:
    int count = 50; 

public:
    void showCounts() {
        cout << "Class member count: " << count << endl;
        cout << "Global count: " << :: count << endl;
    }
};

int main() {
    Counter myCounter;
    myCounter.showCounts();

    return 0;
}