#include <iostream>
using namespace std;
int main(){
    int i,j;
    int row,col;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the number of columns: ";
    cin>>col;
    int arr[row][col]; 
    
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"transpose of matrix : "<<endl;
    for(i=0;i<col;i++){
        for(j=0;j<row;j++) cout<<arr[j][i]<<" ";
        cout<<endl;
    }
}
