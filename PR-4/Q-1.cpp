#include<iostream>
using namespace std;

main()
{
	int size;
	
	cout<<"Enter any number :";
	cin>>size;
	
	cout<<"--array input--"<<endl;
	
	int a[size] , i;
	
	for(i=0; i<size; i++)
	{
		cout<<"a["<<i<<"] :";
		cin>>a[i];
	}
	
	cout<<"--array output--"<<endl;
	
	for(i=0; i<size; i++)
	{
		if(a[i]<0)
		{
			cout<<a[i]<<" ";
		}
	}
}
