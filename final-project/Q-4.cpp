#include <iostream>
using namespace std;

int partion(int arr[], int low, int high){
	
	int i,j,temp;
	int p = arr[high];
	
	i = low - 1;
	
	for (j=low; j<high; j++)
	{
		if (arr[j] < p)
		{
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	
	temp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = temp;
	
	return i + 1;
}

void quickSort(int arr[], int low, int high){
	
	if (low < high)
	{
		int pi = partion(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}
main(){
	
	int arr[] = {11, 5, 15, 8, 7, 44, 6, 4},n;
	int i;
	
	n = sizeof(arr) / sizeof(arr[0]);
	cout << " Array Element "<<endl<<endl;
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	
	cout<<endl<<endl;

	quickSort(arr, 0, n - 1); 
	cout << "Sorted Array "<<endl<<endl;
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
