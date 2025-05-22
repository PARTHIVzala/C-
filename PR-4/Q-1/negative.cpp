#include <iostream>
using namespace std;
int main(){
    int i, n;
    cout << "Enter the number of elements in array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : ";
    
    for (i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    cout<<"\n";   
    for (i = 0; i < n; i++)
    {
        if(arr[i] <0 ) cout << arr[i] << " ";
    }
}
