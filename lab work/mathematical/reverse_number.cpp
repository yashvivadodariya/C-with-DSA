#include<iostream>
using namespace std;

main(){
	
	int no, r, rev=0;
	
	cout<<"Enter any number :";
	cin>>no;
	
	while(no!=0)
	{
		r =no%10;
		rev =(rev*10)+r;
		no =no/10;
	}
	
	cout<<"Reverse number : "<<rev;
}
