#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList {
public:
    Node *head;
    int count;

    LinkedList() {
        head = NULL;
        count = 0;
    }
    void create(int data) {
        Node *nextNode = new Node(data);
        if (head == NULL) {
            head = nextNode;
        } else {
            Node *ptr = head;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = nextNode;
        }
        count++;
    }

    void viewData() {
        Node *ptr = head;
        while (ptr != NULL) {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }
};
int main() {
    LinkedList list;
    int ch, element;
    while (1) {
        cout << "\nPress 1 to Create Node\n";
        cout << "Press 2 to View Nodes\n";
        cout << "Press 0 to Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        if (ch == 0) {
            cout << "----- Thank You -----" << endl;
            break;
        }

        switch (ch) {
        case 1:
            cout << "Enter your Element: ";
            cin >> element;
            list.create(element);
            cout << "----- Successfully Inserted -----" << endl;
            break;
        case 2:
            list.viewData();
            break;
        default:
            cout << "Invalid Choice!" << endl;
        }
    }

    return 0;
}
