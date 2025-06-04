#include <iostream>
using namespace std ;

int main (){
	int matrix [4] [4] ;
	int mainDiagonalSum = 0, secondaryDiagonalSum = 0;
	
	cout << " Enter elements : - " << endl ;
	
	for (int i=0 ; i<4 ; i++ ){
		for (int j=0 ; j<4 ; j++){
			cin >> matrix [i][j];
		}
	}
	cout << "Sum of main diagonal elements: " << mainDiagonalSum << endl;
	cout << "Sum of secondary diagonal elements: " << secondaryDiagonalSum << endl;	return 0 ;
}
