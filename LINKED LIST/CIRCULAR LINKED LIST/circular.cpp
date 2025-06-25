#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node* HEAD = new Node;
    HEAD->data = 75;
    HEAD->next = NULL;

    Node* second = new Node;
    second->data = 95;
    second->next = NULL;
    HEAD->next = second;

    Node* third = new Node;
    third->data = 47;
    third->next = NULL;
    second->next = third;

    Node* fourth = new Node;
    fourth->data = 16;
    fourth->next = HEAD;
    third->next = fourth;

    Node* ptr = HEAD;
    do {
        cout << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != HEAD);

    return 0;
}

