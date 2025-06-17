#include <iostream>
using namespace std ;
class student {
	public :
		int ID ;
		string name ;
		student (int ID , string name ) {
			this->ID = ID ;
			this->name = name ;
		}
		void display () {
			cout << " ID :- " << this->ID << endl;
			cout << " Name :- " << this->name << endl ;
		}
		~student () {
			cout << " Destructor is called " << endl ;
		}
};
main (){
	student* s = new student(16 ,"NISU" );
	s->display();
	delete s ;
}
