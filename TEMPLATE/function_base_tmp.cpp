#include <iostream>
using namespace std ;

template <typename T>
T add (T a , T b){
	return a+b ;
}
main(){
	cout<<"Sum :- " << add <int>(5,6)<<endl;
	cout<<"Sum :- " << add <double>(4.44 , 4.44)<<endl ;
}
