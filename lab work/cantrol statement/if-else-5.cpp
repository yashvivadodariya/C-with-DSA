#include<iostream>
using namespace std;

main(){
	int a,b,c,d,e;
	
	cout<<"Enter any number of A:";
	cin>>a;
	cout<<"Enter any number of B:";
	cin>>b;
	cout<<"Enter any number of C:";
	cin>>c;
	cout<<"Enter any number of D:";
	cin>>d;
	cout<<"Enter any number of E:";
	cin>>e;
	
	if(a>b){
		if(a>c)
		{
			if(a>d)
			{
				if(a>e)
				{
					cout<<"A is Max";
				}
				else{
					cout<<"E is Max";
				}
			}
			else{
				if(d>e)
				{
					cout<<"D is Max";
				}
				else{
					cout<<"E is max";
				}
			}
		}
		else{
			if(c>d)
			{
				if(a>e)
				{
					cout<<"C is Max";
				}
				else{
					cout<<"E is Max";
				}
			}
			else{
				if(d>e)
				{
					cout<<"D is Max";
				}
				else{
					cout<<"E is max";
				}
			}
			
		}
	}
	else{
		if(b>c)
		{
			if(b>d)
			{
				if(b>e)
				{
					cout<<"B is Max";
				}
				else{
					cout<<"E is Max";
				}
			}
			else{
				if(d>e)
				{
					cout<<"D is Max";
				}
				else{
					cout<<"E is max";
				}
			}
		}
		else{
			if(c>d)
			{
				if(c>e)
				{
					cout<<"C is Max";
				}
				else{
					cout<<"E is Max";
				}
			}
			else{
				if(d>e)
				{
					cout<<"D is Max";
				}
				else{
					cout<<"E is max";
				}
			}
			
		}
		
	}
}

