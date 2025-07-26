#include<iostream>
using namespace std;

main(){
	
	int arr[5] = {10, 2, 34, 22, 15};
	
	int n= sizeof(arr)/sizeof(arr[0]);
	
	int i;
	for(i; i<n-1; i++){
		
		int minimum = i;
		
		int j;
		for(j = i+1; j<n; j++){
			if(arr[j]<arr[minimum]){
				minimum=j;
			}
		}
		
		if(minimum!=i){
			int tmp = arr[i];
			arr[i] = arr[minimum];
			arr[minimum] = tmp;
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<" "<<arr[i];
	}
	
	
	

}
