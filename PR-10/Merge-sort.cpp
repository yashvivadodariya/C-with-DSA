#include<iostream>
#include<vector>
using namespace std;

void print_arr(vector <int> &arr){
	int i;
	cout<<"array: "<<endl;
	for( i=0; i<arr.size(); i++){
		cout<<" "<<arr[i];
	}
	cout<<endl;
}

void Merge(vector <int> &arr, int low, int mid, int high){
	vector <int> tmp;
	int left = low;
	int right = mid + 1;
	
	while(left<=mid && right<=high){
		if(arr[left]<=arr[right]){
			tmp.push_back(arr[left]);
			left++;
		}else{
			tmp.push_back(arr[right]);
			right++;
		}
	}
	while(left<=mid){
		tmp.push_back(arr[left]);
		left++;
	}
	while(right<=high){
		tmp.push_back(arr[right]);
		right++;
	}
	for(int i=low;i<=high;i++){
		arr[i] = tmp[i-low];
	}
}

void merge_sort(vector <int> &ar,int low,int high){
	if(low>=high){
		return;
	}
	int mid;
	mid = (low + high) / 2;
	merge_sort (ar, low, mid);
	merge_sort (ar, mid + 1, high);
	Merge (ar, low, mid, high);
}

main(){
	int n;
	cout<<"Enter the size of array:- ";
	cin>>n;
	vector <int> arr;
	
	for(int i=0; i<n; i++){
		int element;
		cout<<"Enter array elements: ";
		cin>>element;
		arr.push_back(element);
	}
	print_arr(arr);
	merge_sort(arr, 0, n-1);
	print_arr(arr);
}
