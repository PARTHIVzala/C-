#include <iostream>
using namespace std ;
class student {
	private :
		int age ;
	public :
		void setage (int a){
			age = a ;
		}
		int getage (){
			return age ;
		}
};
main (){
	student st ;
	st . setage (22) ;
	cout << " age :- " << st .getage ();
}
