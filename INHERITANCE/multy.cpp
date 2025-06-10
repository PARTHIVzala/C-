#include <iostream>
using namespace std ;
class A {
	public :
		void data_a (){
			cout << "A class " ;
		}
};
class B {
	public :
		void data_b (){
			cout << "B class " ;
		}
};
class C  : public A , public B{
	public :
		void data_c (){
			cout << "C class " ;
		}
};
main (){
	C c ;
	c.data_a();
	c.data_b();
	c.data_c();
}
