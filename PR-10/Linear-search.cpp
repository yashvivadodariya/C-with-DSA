#include<iostream>
using namespace std;

int linear_Search(int arr[], int n, int target){
	int i;
	for(i=0; i<n; i++){
		
		if (arr[i] == target) {
			return i;
		}
	}
	
	return -1;
}

main(){
	int arr[5]={13, 22, 2, 18, 30};
	
	int target = 18;
	
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int result=linear_Search(arr, n, target);
	
	if (result!=-1){
		cout<<"element found at index: "<<result<<endl;
	}
	else{
		cout<<"element not found"<<endl;
	}

}
