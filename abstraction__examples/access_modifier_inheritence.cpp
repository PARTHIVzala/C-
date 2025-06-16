#include <iostream>
 using namespace std; 
 class Vehicle { 
 protected:
  void startEngine() {
   cout << "Engine started!" << endl;
    } 
}; 
class Car : public Vehicle {
 public:
  void drive() {
   startEngine();
    cout << "Driving car..." << endl; 
	} 
}; 
int main() { 
	Car c; 
	c.drive(); 
	return 0; 
}		
