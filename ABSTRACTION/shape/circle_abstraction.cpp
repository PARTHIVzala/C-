#include <iostream>
using namespace std ;
class shape {
	public :
		virtual void draw() = 0 ;
};
class Circle : public shape {
	public :
		void draw (){
			cout << " Drawing Circle " << endl ;
		}
};
int main (){
	shape * shape ;
	Circle c;
	shape = &c ;
	shape-> draw();
	return 0 ;
}
