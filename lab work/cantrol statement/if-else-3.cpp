#include<iostream>
using namespace std;

main(){
	int a,b,c;
	
	cout<<"Enter any number :";
	cin>>a;
	cout<<"Enter any number :";
	cin>>b;
	cout<<"Enter any number :";
	cin>>c;
	
	if(a>b)
	{
		if(a>c)
		{
			cout<<"A is Max";
		}
		else
		{
			cout<<"C is Max";
		}
	}
	else
	{
		if(b>c)
		{
			cout<<"B is Max";
		}
		else
		{
			cout<<"C is Max";
		}
	}
}
