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
            cout << element << " Push To Stack." << endl;
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
            cout << "Stack Is Empty!" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack Is Empty!" << endl;
        } else {
            cout << "Stack Elements Are: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int size;
    cout << "Enter Stack Size: ";
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
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Element to Push: ";
            cin >> element;
            stack.push(element);
            break;
        case 2:
            value = stack.pop();
            if (value != -1) {
                cout << "Pop Value : " << value << endl;
            }
            break;
        case 3:
            value = stack.peek();
            if (value != -1) {
                cout << "Top Element : " << value << endl;
            }
            break;
        case 4:
            stack.display();
            break;
        case 5:
            cout << "Exit..." << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
        }
    }

    return 0;
}

