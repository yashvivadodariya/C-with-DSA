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
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"--row sum--"<<endl;
	
	int r, sum=0;
	
	cout<<"Enter any row :";
	cin>>r;
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(i==r)
			{
				cout<<a[i][j]<<" ";
				sum+=a[i][j];
			}
		}
	}
	
	cout<<endl;
	
	cout<<"Row sum :"<<sum;
	
	cout<<endl;
	
	cout<<"--col sum--"<<endl;
	
	int c, num=0;
	
	cout<<"Enter any col :";
	cin>>c;
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(j==c)
			{
				cout<<a[i][j]<<" ";
				num+=a[i][j];
			}
		}
	}
	
	cout<<endl;
	
	cout<<"col sum :"<<num;
}
