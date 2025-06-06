#include <iostream> 
using namespace std; 
class Counter { 
	private:
	static int count; 
	public: 
		static void increment() {
	
		count++; 
		cout << "Count: " << count << std::endl; 
	} 
}; 
int Counter::count = 0; 
int main() { 
	Counter::increment(); 
	Counter::increment(); 
	return 0; 
} 
