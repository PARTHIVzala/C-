#include <iostream>
using namespace std ;
void display(){
	cout << " inside display function " << endl ;
}
void wrapper (){
	cout << " inside wrapper function " << endl ;
	display();
}
int main (){
	wrapper () ;
	return 0 ;
}
