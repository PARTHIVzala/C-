#include <iostream>
using namespace std ;
int main (){
	int a=5 , b=10 , c=15 ;
	int *arr[3];
	arr[0] = &a;
	arr[1] = &b;
	arr[2] = &c;
	for (int i=0 ; i<3 ; i++){
		cout << *arr[i] << "   " ;
	}
	return 0 ;
}
