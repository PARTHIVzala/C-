#include <iostream>
using namespace std ;
int main (){
	int x=43 ;
	int *ptr = &x ;
	int **pptr = &ptr ;
	
	cout << " value : " << x << endl ;
	cout << " using *ptr : " << *ptr << endl ;
	cout << " using **ptr : " << **pptr << endl ;
	return 0 ;
}
