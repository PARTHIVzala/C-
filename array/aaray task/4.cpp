#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    int sum = 0 ;
    
    cout << " sum of all elements : - " << endl ;
	for (int i=0 ; i<4 ; i++){
		for (int j=0 ; j<4 ; j++){
			cin >> matrix[i][j] ;
			sum += matrix[i][j] ;
		}
	}
	cout << " sum of all elements : - " << sum << endl ;
	return 0 ;
}
