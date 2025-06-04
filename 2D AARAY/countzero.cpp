#include <iostream>
using namespace std ;

int main(){
	int arr [2][3] = {{0,2,0},{3,0,6}} ;
	int coutzero = 0 ;
	for(int i=0 ; i<2 ; i++){
		for(int j=0 ; j<3 ; j++){
			if ( arr [i][j] == 0) coutzero++ ;
		}
	}
	cout << "number of zeros :" << coutzero ;
	return 0 ;
}
