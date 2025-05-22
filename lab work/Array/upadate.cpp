#include<iostream>
using namespace std;

main(){
	int i, a[5] = {10,20,30,40,50};
	int index, value;
	
	cout<<"index element"<<endl;
	cout<<"Enter any value :";
	cin>>index;
	
	cout<<"  index value  "<<endl;
	cout<<"Enter the value :";
	cin>>value;
	
	a[index] = value;
	
	for(i=0; i<5; i++)
	{
		cout<<" "<<a[i];
	}
}
