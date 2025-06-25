#include <iostream>
using namespace std ;
class Node{
public :
    int data ;
    Node *next ;
};
main (){
    Node *HEAD = NULL ;
    HEAD = new Node;

    HEAD->data =25 ;
    HEAD-> next = NULL ;

    Node *n2 = new Node ;
    n2->data =98 ;
    n2->next =NULL ;
    HEAD ->next =n2 ;

    Node *n3 = new Node ;
    n3->data =75 ;
    n3->next =NULL ;
    n2->next =n3 ;

    Node *n4 = new Node ;
    n4->data = 16 ;
    n4->next = NULL ;
    n3->next = n4 ;

    Node *n5 = new Node ;
    n5->data = 47 ;
    n5->next = NULL ;
    n4->next = n5 ;

    Node *n6 = new Node ;
    n6->data = 1647 ;
    n6->next = NULL ;
    n5->next = n6 ;

    cout << "First Node :- "<<HEAD->data<< "Address :- " << HEAD->next << endl;
    cout << "second Node :- "<<n2->data<< "Address :- " << n2->next << endl;
    cout << "third Node :- "<<n3->data<< "Address :- " << n3->next << endl;
    cout << "fourth Node :- "<<n4->data<< "Address :- " << n4->next << endl;
    cout << "fifth Node :- "<<n5->data<< "Address :- " << n5->next << endl;
    cout << "sixth Node :- "<<n6->data<< "Address :- " << n6->next << endl;
}
