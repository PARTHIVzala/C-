#include <iostream>
using namespace std ;

int main(){
	int a[2][2] = {{1,2,},{3,4}};
	int b[2][2] = {{1,2,},{3,4}};
	bool equal = true ;
	
	for (int i=0 ; i<2 ; i++){
		for (int j=0 ; j<2 ; j++){
			if (a [i][j]!= b[i][j]){
				equal = false ;
				break ;
			}
		}
	}
	if(equal)
		cout << " matrices are equal" ;
		else
		cout << " matrices are not equal" ;
		return 0 ;
}

