#include <iostream>
using namespace std ;
class student{
private :
	int roll_no , age ;
	string name ;
	
public :
	void set_data (int roll_no , string name , int age){
		this -> roll_no = roll_no ;
		this -> age = age ;
		this -> name = name ;
	}
	
	void get_data (){
		cout << " student age : - " << this -> age << endl ;
		cout << " student name :- " << this -> name << endl ;
		cout << " student roll no :- " << this -> roll_no << endl ;
		cout << "____________________________"<< endl ;
	}
};
main (){
	student st , st1 ,st2 ;
	st . set_data (22 ,"NISU" , 16);
	st1 . set_data (19 ,"HEMU" , 17);
	st2 . set_data (28 , "KHUSHI" , 18);
	
	st.   get_data () ;
	st1 . get_data ();
	st2 . get_data ();
}
