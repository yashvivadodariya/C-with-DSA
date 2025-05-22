#include<iostream>
using namespace std;

main(){
	
	int row,col;
	
	cout<<"Enter the number :";
	cin>>row;
	cout<<"Enter the number :";
	cin>>col;
	
	int a[row][col];
	int i,j;
	
	cout<<"--array input--"<<endl;
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			cout<<"a["<<i<<"] ["<<j<<"] :";
			cin>>a[i][j];
		}
		cout<<endl;
	}
	 
	cout<<"--array output--"<<endl;
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			cout<<a[j][i]<<" ";
		}
		cout<<endl;
	}
}
