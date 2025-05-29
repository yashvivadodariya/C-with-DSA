#include<iostream>
using namespace std;

main(){
	int no=5,i;
	int n1=0,n2=1,n3;
	
	cout<<n1<<n2;
	
	for(i=2; i<no; i++)
	{
		n3=n1+n2;
		cout<<n3;
		n1=n2;
		n2=n3;
	}
}
