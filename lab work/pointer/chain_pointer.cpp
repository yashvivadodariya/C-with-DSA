#include<iostream>
using namespace std;

main(){
	int x=42;
	int *p=&x;
	int **q=&p;
	
	cout<<"Value : "<<x<<endl;
	cout<<"using *p : "<<*p<<endl;
	cout<<"using **q : "<<**q<<endl;
}
