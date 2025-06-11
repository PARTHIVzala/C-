#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing shape..." << endl;
    }

    virtual ~Shape() {}
};

class Rectangle : public Shape {
public:
    void draw() override {
        float length, width, area;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter length: ";
        cin >> length;

        area = width * length;
        cout << "Rectangle area: " << area << endl;
    }
};
int main() {
    Shape* s;
    Rectangle r;

    s = &r;
    s->draw();
    return 0;
}
