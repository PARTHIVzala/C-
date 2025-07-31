#include <iostream>
using namespace std;

class Node {
public:
    int data;
    	Node* prev;
    	Node* next;

    Node(int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

class CircularLinkedList {
	private:
    	Node* head;
	public:
    	CircularLinkedList() {
        	head = NULL;
    	}

    void insert(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void displayForward() {
        Node* temp = head;
        cout << "Forward: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void displayBackward() {
        Node* temp = head;
        if (temp == NULL) return;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        cout << "Backward: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main() {
    CircularLinkedList list;
    list.insert(16);
    list.insert(20);
    list.insert(30);
    list.insert(47);

    list.displayForward();
    list.displayBackward();

    return 0;
}
