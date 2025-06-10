#include <iostream>
using namespace std ;
class A {
	public :
		int a;
};
class B {
	public :
		int b;
		
};
class C : public A , public B{
	public :
		void sum (){
			cout << "Enter no A " << endl; 
			cin >> a ;
			cout << "Enter no B " << endl ;
			cin >> b ;
			cout << "Ans :- " << a+b << endl ;
			
		}
};
main (){
	C c ;
	c.sum () ;
}
