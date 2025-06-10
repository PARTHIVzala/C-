#include <iostream>
using namespace std ;
class A {
	public :
		int age ;
};
class B : public A {
	public :
		void checkage (){
			cout << "Enter your age " ;
			cin >> age ;
			cout << " Your age is : " << age << endl ;
			
		}
};
class C : public A {
	public :
		void checkage () {
			B b ;
			B PrintAge () ;
			cout << " Enter your age " ;
			cin >> age ;
			
			if (age >= 18) {
				cout << " You can vote " ;
				
			}else {
				cout << " You can not vote " ;
		
			}
		}
};
main (){
	C c ;
	c.checkage();
	
}
