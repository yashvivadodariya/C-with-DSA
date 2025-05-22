#include<iostream>
using namespace std;

main(){
	int n, i;
	
	cout<<"Enetr the size of Array: ";
	cin>>n;
	
	int a[n];
	
	for(i=0; i<n; i++){
		cin>>a[i];
	}
	
	for(i=0; i<n; i++){
		if(a[i]%2==1){
			cout<<" "<<a[i];
		}
	}
	cout<<endl;
}
