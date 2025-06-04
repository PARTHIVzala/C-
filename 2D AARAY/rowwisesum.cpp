#include <iostream>
using namespace std ;

int main(){
	int arr [2][3] = {{1,2,3},{4,5,6}} ;
	for (int i=0 ; i<2 ; i++){
		int rowsum = 0 ;
		for (int j=0 ; j<3 ; j++){
			rowsum += arr[i][j] ;
		}
		cout << "sum of row " << i << "="<<rowsum<<endl;
	}
	return 0;
}
