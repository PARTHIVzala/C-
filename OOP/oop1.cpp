#include<iostream>
using namespace std ;
class car {
	public :
		void Getdetails(){
			cout << " Wellcome to car bazzar : " << endl ;
		}
};

int main() {
    car mycar; // Object
    mycar . Getdetails();
    return 0;
}
