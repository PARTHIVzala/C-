#include <iostream>
using namespace std ;

int main(){
	int arr [3][3] = {{1,2,3},{4,5,6},{7,8,9}} ;
	cout << "diagonal elements :" ;
	for( int i=0 ; i<3 ; i++){
		cout << arr [i][i] << "   " ;
	}
	return 0 ;
}
