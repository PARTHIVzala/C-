#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    cout << "Enter elements:" << endl;
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 3; j++) {        
            cin >> matrix[i][j];
        }
    }
    cout << "col-wise sum:" << endl;
    for (int i = 0; i < 3; i++) {
        int colsum = 0;
        for (int j = 0; j < 3; j++) {
            colsum += matrix[i][j];
        }
        cout << "Sum of col " << i + 1 << " = " << colsum << endl;
    }

    return 0;
}
