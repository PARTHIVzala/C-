#include <iostream>
using namespace std;
class Shape {
	public:
    	virtual void draw() {
        	cout << "Drawing shape..." << endl;
    }
    virtual ~Shape() {}
};
class Triangle : public Shape {
public:
    void draw() override {
        float base, height, area;
        cout << "Enter base: ";
        cin >> base;
        cout << "Enter height: ";
        cin >> height;

        area = 0.5 * base * height;
        cout << "Triangle area: " << area << endl;
    }
};
int main() {
    Shape* s;
    Triangle t;

    s = &t;
    s->draw();
    return 0;
}

