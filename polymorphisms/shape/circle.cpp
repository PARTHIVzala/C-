#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing shape..." << endl;
    }
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override {
        int r;
        float ans;
        cout << "Enter radius: ";
        cin >> r;
        ans = 3.14 * r * r;
        cout << "Circle area: " << ans << endl;
    }
};

int main() {
    Shape* s;
    Circle c;
    s = &c;

    s->draw();
    return 0;
}
