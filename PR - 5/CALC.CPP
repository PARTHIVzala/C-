#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    switch(op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
        case '/':
            if(num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
        default:
            cout << "Error: Invalid operator!" << endl;
    }
    return 0;
}
