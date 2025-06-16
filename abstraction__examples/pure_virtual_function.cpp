#include <iostream>
using namespace std ;
class Animal{	
	public: virtual void makeSound() = 0;
}; 
class Dog : public Animal {
 	public: 
 		void makeSound() 
		 override {
		  cout << "Dog says Woof!" << endl;
		} 
	}; 
int main() {
	Animal* a = new Dog();
	a->makeSound(); 
	delete a; return 0; 
}
