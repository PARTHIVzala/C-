#include <iostream>
using namespace std ;


void inc(int *x);

int main() {
    int a = 5;
    cout << "Before A value: " << a << endl;
    inc(&a);
    cout << "After A value: " << a << endl;
    return 0;
}

void inc(int *x) {
    *x = *x + 1;
}

