#include <iostream>
using namespace std ;
int main (){
	int matrix[4] [4] ;
	
	cout << "Enter elements : - " ;
	for(int i=0 ; i<4 ; i++ ){
		for(int j=0 ; j<4 ; j++){
			cin >> matrix[i][j];
		}
	}
	cout << "anti diagonal elements : - " ;
	for (int i=0 ; i<4 ; i++) {
		cout << matrix[i][2-i] << "   " ;
	}
	return 0 ;
}
