#include<iostream>
using namespace std;

main(){
	int row,col;
	
	cout<<"Enter the value of Row:";
	cin>>row;
	cout<<"Enter the value of Column:";
	cin>>col;	
	
	int a[row][col];
	int i,j;
	
	cout<<"---Array Input---"<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<"a["<<i<<"]"<< "["<<j<<"]:";
			cin>>a[i][j];
		}
		cout<<endl;
	}
	
	cout<<"---Array Output---"<<endl;
	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			if( i==0 || j==0 || i==row-1 || j==col-1 ){
				cout<<a[i][j]<<" ";
			}
		}
	}
}
