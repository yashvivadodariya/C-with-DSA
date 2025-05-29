#include<iostream>
using namespace std;
int fact(int no);

main(){
	int no=5;
	
	cout<<"factorial :"<<fact(no);
}

int fact(int no){
	if(no <= 1)
	{
		return 1;
	}
	else{
		return no*fact(no-1);
	}
}

