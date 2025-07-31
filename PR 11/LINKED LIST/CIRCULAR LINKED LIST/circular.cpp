#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

int main() {
    Node* ptr = NULL;

    Node* HEAD = new Node;
    HEAD->data = 75;
    HEAD->next = NULL;
    ptr = HEAD;

    Node* second = new Node;
    second->data = 95;
    second->next = NULL;
    ptr->next = second;

    Node* third = new Node;
    third->data = 47;
    third->next = NULL;
    second->next = third;

    Node* fourth = new Node;
    fourth->data = 16;
    fourth->next = HEAD;
    third->next = fourth;

    ptr = HEAD;
    Node* start = HEAD;
    do {
        cout << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != start);
    return 0;
}

