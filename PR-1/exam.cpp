#include<iostream>
using namespace std;

main(){ 
    
		char GRADE;
    	int a;
    
    	cout<<"Enter the mark :";
    	cin>>a;
      
    	if(a>=91 && a<=100)
		{
			GRADE = 'A';
    	}
    	else if(a>=81 && a<=90)
     	{
	 		GRADE = 'B';

     	}
     	else if(a>=71 && a<=80)
     	{
	 	 GRADE = 'C';
		}
    	else if (a>=61 && a<= 70 )
     	{
	   		GRADE = 'D';
		}
     	else if (a>=33 && a<=60 )
     	{
	 		GRADE = 'E' ;
     	}

     	else
     	{
     		if(a>=0 && a<=32)
     		{
     			GRADE ='F';
			}
		}

	    switch(GRADE)
	    {
	       case 'A':
				cout<<"Your grade is A ,Excellent";
	       break;

	       case 'B':
				cout<<"Your grade is B ,Well done";
	       break;

	       case 'C':
				cout<<"Your grade is C ,Good job";
	       break;

	       case 'D':
				cout<<"Your grade is D ,Good";
	       break;

	       case 'E':
		       cout<<"Your grade is E , You pass";
	       break;

	       case 'F':
				cout<<"Your grade is F,sorry you fail";
	       break;
	       
	       default:
	       	cout<<"Pleasa Enter Correct Number....";
	   }
}
