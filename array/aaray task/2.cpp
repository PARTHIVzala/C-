#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    cout << "Matrix elements row-wise:" << endl;
    for (int i = 0; i < 3; i++) {         
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
