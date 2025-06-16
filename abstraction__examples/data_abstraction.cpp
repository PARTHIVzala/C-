#include <iostream>
using namespace std ;

class Fan {
	private :
		int speed ;
		
	public :
		void setspeed (int s){
		if (s>=0 && s<=50){
			speed = s ;
		}
		else {
			speed = 0 ;
		}
	}
	void showspeed (){
		cout << "Fan speed is : " << speed << endl;
	}
};
int main () {
	Fan f ;
	f.setspeed(40);
	f.showspeed();
	return 0;
}
