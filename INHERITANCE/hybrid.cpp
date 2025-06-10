#include <iostream>
using namespace std;

class A {
public:
    void show_A() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {
public:
    void show_B() {
        cout << "Class B" << endl;
    }
};

class C : virtual public A {
public:
    void show_C() {
        cout << "Class C" << endl;
    }
};

class D : public B, public C {
public:
    void show_D() {
        cout << "Class D" << endl;
    }
};

int main() {
    D obj;
    obj.show_A(); 
    obj.show_B();
    obj.show_C();
    obj.show_D();
    return 0;
}
