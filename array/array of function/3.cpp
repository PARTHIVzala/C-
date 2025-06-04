#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    cout << "Enter elements:" << endl;
    for (int j = 0; j < 3; j++) { 
        for (int j = 0; j < 3; j++) {        
            cin >> matrix[i][j];
        }
    }
    cout << "cloumn-wise sum:" << endl;
    for (int j = 0; j < 3; j++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Sum of column " << i + 1 << " = " << rowSum << endl;
    }

    return 0;
}
