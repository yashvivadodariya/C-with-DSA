#include<iostream>
using namespace std;

main(){
	int a,b,c,d;
	
	cout<<"Enter any number of A:";
	cin>>a;
	cout<<"Enter any number of B:";
	cin>>b;
	cout<<"Enter any number of C:";
	cin>>c;
	cout<<"Enter any number of D:";
	cin>>d;
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				cout<<"A is Max";
			}
			else{
				cout<<"D is Max";
			}
		}
		else{
			if(c>d)
			{
				cout<<"C is Max";
			}
			else{
				cout<<"D is Max";
			}
		}
	}
	else{
		if(b>c)
		{
			if(b>d)
			{
				cout<<"B is Max";
			}
			else{
				cout<<"D is Max";
			}
		}
		else{
			if(c>d)
			{
				cout<<"C is Max";
			}
			else{
				cout<<"D is max";
			}
		}
	}
	
}
