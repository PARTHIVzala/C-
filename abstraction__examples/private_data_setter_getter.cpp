#include <iostream>
using namespace std ;
class student {
	private :
		int marks ;
	public :
		void setMarks (int m){
			if (m>=0 && m<=100){
				marks = m ;
			}else {
				marks = 0 ;
			}
		}
		int getMarks (){
			return marks;
		}
};
int main (){
	student s;
	s.setMarks (88);
	cout << "student marks : " << s.getMarks () << endl ;
	return 0 ;
}
