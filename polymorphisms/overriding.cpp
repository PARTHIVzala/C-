#include <iostream>
using namespace std ;
class calculator{
	public :
		void add (int a , int b){
			cout << " Sum in two numbers" << a+b << endl ;
		}
		void add (int a , int b , int c){
			cout << " sum in three numbers" << a+b+c << endl ;
		}
		void dd (double a , double b){
			cout << " sum in two numbers" << a+b << endl ;
		}
};
main (){
	calculator c ;
	c.add(10,2);
	c.add(11,3,6);
	c.add(10.50, 4.50);
	return 0;
}
