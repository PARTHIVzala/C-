#include <iostream>
#include <vector>
using namespace std ;
int main() {
	vector<int> nums; 
	nums.push_back(10); 
	nums.push_back(20); 
	nums.push_back(30); 
	cout << "Size: " << nums.size() << endl;
	cout << "First Element : " << nums.front() << endl;
	cout << "Last Element : " << nums.back() << endl;
	
	nums.pop_back();
	cout << "Size after pop: " << nums.size() << endl; 
	return 0; 
}
