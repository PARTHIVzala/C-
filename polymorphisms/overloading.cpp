#include<iostream>
using namespace std;
class Calculater{
	public:
		void add(float a, float b){
			cout<<"sum of two numbers = "<<a+b<<endl;
	}
};
 main(){
	Calculater C;
	C.add(10.50F, 20.98F);
}
