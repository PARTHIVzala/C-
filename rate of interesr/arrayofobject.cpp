#include <iostream>
using namespace std ;

class Student {
	 public: 
	 	string name; 
		int age;
		void display() {
		 cout << name << " " << age << endl; 
	} 
}; 
	int main() {
	 Student s[3]; 
	 s[0].name = "Amit"; s[0].age = 15; 
	 s[1].name = "Riya"; s[1].age = 14; 
	 s[2].name = "John"; s[2].age = 16; 
	 for(int i = 0; i < 3; i++)
	 s[i].display(); 
	 
} 
