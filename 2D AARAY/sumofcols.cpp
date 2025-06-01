#include <iostream>
using namespace std ;

int main(){
	int arr [2][3] = {{1,2,3},{4,5,6}} ;
	for( int j=0 ; j<3 ; j++){
		int colsum =0;
		for(int i=0 ; i<2 ; i++){
			colsum += arr[i][j];
		}cout << "sum of column" << j << " = " << colsum << endl ;
	}
	return 0 ;
}
