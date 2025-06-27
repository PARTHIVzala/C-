#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist {
public:
    Node* head;
    int count;

    Linkedlist() {
        head = NULL;
        count = 0;
    }

    void create(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* ptr = head;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = newNode;
        }
        count++;
        cout << "Node created successfully." << endl;
    }

    void view() {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        Node* ptr = head;
        cout << "Linked list: ";
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }

    void update(int pos, int newData) {
        if (pos < 0 || pos >= count) {
            cout << "Invalid position!" << endl;
            return;
        }
        Node* ptr = head;
        for (int i = 0; i < pos; i++) {
            ptr = ptr->next;
        }
        ptr->data = newData;
        cout << "Node updated successfully." << endl;
    }

    void deleteNode(int pos) {
        if (pos < 0 || pos >= count) {
            cout << "Invalid position!" << endl;
            return;
        }
        Node* temp;
        if (pos == 0) {
            temp = head;
            head = head->next;
        } else {
            Node* ptr = head;
            for (int i = 0; i < pos - 1; i++) {
                ptr = ptr->next;
            }
            temp = ptr->next;
            ptr->next = temp->next;
        }
        delete temp;
        count--;
        cout << "Node deleted successfully." << endl;
    }
};

int main() {
    Linkedlist list;
    int choice, data, position;

    while (true) {
        cout << " ----------------MENU----------------\n";
        cout << "1. Create (Insert at end)\n";
        cout << "2. View List\n";
        cout << "3. Update at position\n";
        cout << "4. Delete at position\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data: ";
                cin >> data;
                list.create(data);
                break;
            case 2:
                list.view();
                break;
            case 3:
                cout << "Enter position to update (starting from 0): ";
                cin >> position;
                cout << "Enter new data: ";
                cin >> data;
                list.update(position, data);
                break;
            case 4:
                cout << "Enter position to delete (starting from 0): ";
                cin >> position;
                list.deleteNode(position);
                break;
            case 0:
                cout << "----Exit----" << endl;
                return 0;
            default:
                cout << "----Invalid choice! Try again----" << endl;
        }
    }
    return 0;
}
