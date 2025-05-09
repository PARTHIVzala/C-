#include<iostream>
using namespace std;
main (){
	int n , count=0 ;
	cout<<"enter a number :";
	cin>>n;
	while(n>0)
	{
		n= n/10;
		count++;	
	}
	cout<<"digits are : "<<count;
	return 0;
}
