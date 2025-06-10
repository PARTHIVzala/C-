#include <iostream>
using namespace std ;
class parent {
	public :
		int age ;
			void checkage (){
				cout << " Enter your age :- " ;
				cin >> age ;
				if (age >= 18 ) {
					cout << " You can vote " ;
				}else {
					cout << " You can not vote " ;
				}
			}
};
class child : public parent {
	public :
		int a , b ;
		void sum () {
			cout << " Enter no A :- " ;
			cin >> a ;
			cout << " Enter no B :- " ;
			cin >> b ;
			cout << " Ans :- " << a+b << endl ;
		}
};
main () {
	child c ;
	c.checkage();
	c.sum();
}
