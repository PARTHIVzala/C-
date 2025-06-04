#include <iostream>
using namespace std ;

int main(){
	int arr[2][2] = {{1,2,},{3,4}};
	int transpose[2][2] ;
	
	for (int i=0 ; i<2 ; i++){
		for (int j=0 ; j<2 ; j++){
			transpose[i][j] = arr [i][j] ;
		}
	}
	cout << "transpose matrix : \n";
	for(int i=0 ; i<2 ; i++){
		for ( int j=0 ; j<2 ; j++){
			cout << transpose[i][j] << "   " ;
		}
		cout << endl ;
	}
	return 0 ; 
}
