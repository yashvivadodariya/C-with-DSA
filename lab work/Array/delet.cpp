#include<iostream>
using namespace std;

main(){
	int i, n=5, a[50]={10,20,30,40,50};
	int index=3;
	
	for(i=index; i<5; i++)
	{
		a[i] = a[i+1];
	}
	n--;
	
	cout<<"\n print of array \n";
	
	for(i=0; i<n; i++)
	{
		cout<<" "<<a[i];
	}
}
