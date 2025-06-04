#include <iostream>
using namespace std ;

int main (){
	int arr[2][2] = {{10,50} , {20,40}};
	int max = arr [0][0] ;
	for( int i=0 ; i<2 ; i++){
		for(int  j=0 ; j<2 ; j++){
			if (arr[i][j] > max) {
				max = arr [i] [j] ;
			}
		}
	}
	cout << "maximum element is " << max ;
	return 0 ;
}
