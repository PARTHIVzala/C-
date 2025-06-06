#include <iostream>
using namespace std ;
class counter {
	public :
		int a , b ;
		counter (int a , int b ){
			this -> a = a;
			this -> b = b;
		}
		void result(){
			int c = this -> a + this -> b;
			cout << "Ans : - " << c << endl ;
		}
};
main (){
	counter c (60 , 40 ) ;
	c.result () ;
}
