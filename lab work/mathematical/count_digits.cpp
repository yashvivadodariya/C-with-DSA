#include<iostream>
using namespace std;

main(){
	
	int n;
	int cnt=0;
	
	cout<<"Enter any digits :";
	cin>>n;
	
	while(n!=0)
	{
		cnt++;
		n=n/10;
	}
	cout<<"Count digits : "<<cnt;
}
