#include<iostream>
using namespace std;

int add(int a,int b)
{	
	return a+b;
}

int sub(int a,int b)
{	
	return a-b;
}

int mul(int a,int b)
{
	return a*b;
}

float div(float c,float d)
{	
	return c/d;
}

int modual(int a,int b)
{	
	return a%b;
}

main(){
	int choice,i;
	int a,b;
	float c,d;
	
	do{
		cout<<endl<<"------press the number------"<<endl;
		cout<<"press 1. Add (+)"<<endl;
		cout<<"press 2. sub (-)"<<endl;
		cout<<"press 3. mul (*)"<<endl;	
		cout<<"press 4. div (/)"<<endl;
		cout<<"press 5. modual (%)"<<endl;
		cout<<"Press 0 for Exit"<<endl<<endl;
		cout<<"Enter any number:";
		cin>>choice;
		
		cout<<"Enter the First number:";
		cin>>a;
	
		cout<<"Enter the Second number:";
		cin>>b;
	
		switch(choice){
			case 1 :
				cout<<"A + B = "<<(a+b);
			break;
			
			case 2:
				cout<<"A - B = "<<(a-b);
			break;
			
			case 3 :
				cout<<"A * B = "<<(a*b);
			break;
			
			case 4 :
			    cout<<"C / D = "<<(a/b);
			break;
			
			case 5 :
			cout<<"A % B = "<<(a%b);
			break;	
			 
			default: 
				cout<<"Exitting Calculatur...."<<endl;
			break;
				
			}
		}while(choice!=0);
		
	cout<<endl;
		
}
