#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    cout << "\nMatrix elements column-wise:" << endl;
    for (int j = 0; j < 3; j++) {
        for (int i = 0; i < 3; i++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
