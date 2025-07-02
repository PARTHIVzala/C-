#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int maxSize;

public:
    Stack(int size) {
        maxSize = size;
        arr = new int[maxSize];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int element) {
        if (top >= maxSize - 1) {
            cout << "Stack Overflow " << element << endl;
        } else {
            arr[++top] = element;
            cout << element << " push to stack." << endl;
        }
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return -1;
        } else {
            return arr[top--];
        }
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int size;
    cout << "Enter stack size: ";
    cin >> size;

    Stack stack(size);

    int choice = 0;
    int element, value;

    while (choice != 5) {
        cout << "---- STACK MENU ----" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter element to push: ";
            cin >> element;
            stack.push(element);
            break;
        case 2:
            value = stack.pop();
            if (value != -1) {
                cout << "Popped value: " << value << endl;
            }
            break;
        case 3:
            value = stack.peek();
            if (value != -1) {
                cout << "Top element is: " << value << endl;
            }
            break;
        case 4:
            stack.display();
            break;
        case 5:
            cout << "Exit..." << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}

