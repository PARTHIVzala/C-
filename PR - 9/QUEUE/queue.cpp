#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int front;
    int rear;
    int size;
    int capacity;

public:
    Queue(int cap) {
        capacity = cap;
        arr = new int[capacity];
        front = -1;
        rear = -1;
        size = 0;
    }

    bool isFull() {
        return rear == capacity - 1;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is Full (Overflow)" << endl;
            return;
        }
        if (front == -1) front = 0;
        rear++;
        arr[rear] = value;
        size++;
        cout << value << " enqueued successfully." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty (Underflow)" << endl;
            return;
        }
        cout << arr[front] << " dequeued successfully." << endl;
        front++;
        size--;
        if (front > rear) {
            front = rear = -1;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
        } else {
            cout << "Front element is: " << arr[front] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int getSize() {
        return size;
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    int capacity;
    cout << "Enter queue capacity: ";
    cin >> capacity;

    Queue q(capacity);
    int choice, value;

    do {
        cout << "---- Queue Menu ----" << endl;
        cout << "1. Enqueue (Add)" << endl;
        cout << "2. Dequeue (Delete)" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display Queue" << endl;
        cout << "5. Get Size" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to enqueue : ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.peek();
            break;
        case 4:
            q.display();
            break;
        case 5:
            cout << "Queue size is: " << q.getSize() << endl;
            break;
        case 0:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 0);

    return 0;
}

