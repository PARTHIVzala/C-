#include <iostream>
using namespace std ;
template <class T>
class box {
	public :
		T value ;
		void Setvalue(T v) {
			value = v;
		}
		T Getvalue (){
			return value ;
		}
};
main(){
	box<int>b;
	b.Setvalue(5);
	cout << " value :- " <<b.Getvalue()<< endl ;
	box <string>b1;
	b1.Setvalue("NISU");
	cout << " value :- " <<b1.Getvalue()<< endl ;
	box<float>b2;
	b2.Setvalue(4.4);
	cout << " value :- " <<b2.Getvalue()<< endl ;
	
}
