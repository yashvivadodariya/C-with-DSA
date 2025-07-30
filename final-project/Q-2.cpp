#include<iostream>
using namespace std;

int binary_Search(int arr[], int n, int key){
	int low = 0, high = n-1;
	
	while (low <= high) {
		
		int mid = (low + high) / 2;
		
		if (arr[mid] == key){
			return mid;
		}
		else if (arr[mid] < key){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	
	return -1;
}

main(){
	int arr[] = {30, 45, 4, 13, 2, 56, 15, 34, 50};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int key = 2; 
	
	int index=binary_Search(arr, n, key);
	
	if(index != -1){
		cout<<"element found at index: "<<index<<endl;
	}
	else{
		cout<<"element not founded"<<endl;
	}
	
	return 0;
}
