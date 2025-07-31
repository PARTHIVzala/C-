#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
	for(int i = 0; i < n; i++) {
		if(arr[i] == target) {
			return i;
		}
	}
	return -1;
}

int main() {
	int arr[] = {5, 3, 7, 2,16 , 23};
	int target = 16;

	int n = sizeof(arr) / sizeof(arr[0]);

	int result = linearSearch(arr, n, target);

	if (result != -1)
		cout << "Element found at index: " << result << endl;
	else
		cout << "Element not found" << endl;

	return 0;
}

