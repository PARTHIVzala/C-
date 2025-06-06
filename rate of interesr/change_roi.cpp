#include <iostream>
using namespace std ;
class account {

public:
 static float interestRate;
  static void setRate(float r) {
   interestRate = r; 
}
 		static void displayRate() {
  		cout << "Interest Rate: " << interestRate << "%" << endl; 
	}
}; 
float account::interestRate = 5.0;
int main() {
	account::displayRate();
	account::setRate(6.5); 
	account::displayRate();
} 
