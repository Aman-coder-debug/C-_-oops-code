#include <iostream>

using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    Box(double l = 0.0, double w = 0.0, double h = 0.0) : length(l), width(w), height(h) {}

    friend double calculateVolume(const Box& box);

    void setDimensions(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }
};

double calculateVolume(const Box& box) {
    return box.length * box.width * box.height;
}

int main() {
    double length, width, height;

    cout << "Enter the length of the box: ";
    cin >> length;

    cout << "Enter the width of the box: ";
    cin >> width;

    cout << "Enter the height of the box: ";
    cin >> height;

    Box myBox;
    myBox.setDimensions(length, width, height);

    double volume = calculateVolume(myBox);

    cout << "Volume of the box: " << volume << endl;

    return 0;
}
