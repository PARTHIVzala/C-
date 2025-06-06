#include <iostream> 
using namespace std; 
class Account {
	int accno;
	string name;
			static float rateOfInterest;
	void setDetails(int accno, string name) { 
		this->accno = accno;
		this->name = name; 
	}
	 public : 
void display() { 
	cout << accno << " " << name << " " << rateOfInterest << endl;
	} 
};
	
	static member 
	float Account::rateOfInterest = 7.25; 
int main() {
	Account a1, a2;
	a1.setDetails(111, "Jay"); 
	a2.setDetails(222, "Ajay");
	
	a1.display(); 
	a2.display(); 
	return 0; 
}
