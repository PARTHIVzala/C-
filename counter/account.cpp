#include <iostream>
using namespace std ;
class account {
	public :
		int accno ;
		string name ;
		static float rateofinterest ;
		static string bank ;
		int balance;
		
		void setdetails (int accno ,string name ,int balance){
			this->accno = accno ;
			this->name = name ;
			this->balance = balance ;
			
		}
		void display (){
			cout << "____________________"<<endl ;
			cout << " Accno : - " << this -> accno <<endl ;
			cout << "name : - " << this ->name << endl ;
			cout << " rate of interest : - " << rateofinterest <<endl ;
			cout << "bank : - " << bank <<endl ;
			cout <<"Bank balance"<<this -> balance << endl ;
			
		}
};
float account ::rateofinterest = 4.0 ;
string account ::bank = " Kotak Mahindra Bank " ;
main (){
	account ac1 , ac2 ;
	ac1.setdetails(44444 , "Nisu" , 20923) ;
	ac2.setdetails(10101 , "Kano" , 29342) ;
	
	ac1.display() ;
	ac2.display() ;
}
