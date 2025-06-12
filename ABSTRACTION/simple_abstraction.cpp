#include <iostream>
using namespace std ;
class Employee {
	private :
		int salary ;
	public :
		void setsalary(int s){
			salary = s ;
		}
		int getsalary() {
			return salary ;
		}
};
int main (){
	Employee e ;
	e.setsalary(100000) ;
	cout << "SALARY : - " << e.getsalary() << endl ;
	return 0 ;
}
