#include <iostream>
using namespace std ;
class shape {
	public :
		virtual void draw () = 0 ;
};
class circle :public shape {
	public:
		void draw (){
			int r ;
			float ans ;
			cout << " Enter Radius :- " ;
			cin >> r ;
			ans = 3.14 * r * r ;
			cout << " Circle Area :- " << ans << endl ;
		}
};
class tringle : public shape {
	public :
		void draw (){
			int b , h ;
			float ans ;
			cout << "Enter base : " ;
			cin >> b;
			cout << " Enter height : " ;
			cin >> h;
			ans = b*h ;
			cout << " Tringle area : " << ans << endl ;			
		}
};
int main (){
	shape* s;
	circle c;
	s =&c;
	s->draw();
	tringle t ;
	s= &t ;
	s->draw();
}
