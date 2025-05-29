#include<iostream>
using namespace std;

main(){
	int a[5]={10,20,30,40,50},i;
	int *p = a;
	
	for(i=0; i<5; i++)
	{
		cout<<"Addres = "<<p<<" Value = "<<*p<<endl;
		p++;
	}
}
