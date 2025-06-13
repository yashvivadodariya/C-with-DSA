#include<iostream>
using namespace std;

class Bank{
	private :
		int accNo;
		float accAmount,accde;
		string name;
		
	public :
		void SetAccount(int accNo, string name,float accAmount){
			this->accNo = accNo;
			this->name = name;
			this->accAmount = accAmount;		
		}
		
		
		int accno(){
			return this->accNo;
		}
		
		void getDeatils(){
			cout<<"Account NUmber: "<<this->accNo<<endl;
			cout<<"Name: "<<this->name<<endl;
			cout<<"Amount: "<<this->accAmount<<endl;		
		}
		
		void setCheck(int accNo, string name, float accde){
			cout<<"Your Account balance: "<<this->accAmount + accde<<endl;
		}
		
		void getCheck(int accNo, string name, float accWd){
			cout<<"Your Account balance: "<<this->accAmount - accWd<<endl;
		}
};

main(){
	int choice;
	Bank b[50];
	int accNo;
	float accAmount;
	string name;
	int check;
	float accWd;
	int cnt=0;
	float accde;

	while(1){
		cout<<"Press 1 Create Account"<<endl;
		cout<<"Press 2 Account Deatils"<<endl;
		cout<<"Press 3 Deposite your Amount"<<endl;
		cout<<"Press 4 with_draw your Amount"<<endl;
		cout<<"Press 5 Exit....."<<endl;
		
		cout<<"Enter any choice :";
		cin>>choice;
		
		if(choice == 5){
			cout<<"Thank you...";
			break;
		}
		
		switch(choice){
			case 1:
				cout<<"Enter your Account Number :";
				cin>>accNo;
				cout<<"Enter your Account Name :";
				cin>>name;
				cout<<"Enter your Acoount Amount :";
				cin>>accAmount;
				b[cnt++].SetAccount(accNo, name, accAmount);
				cout<<"...your Accont sucessfuly creat..."<<endl<<endl;
			break;
			
			case 2:
				int acc_No,i;
				cout<<"Enter your Account Number :";
				cin>>acc_No;
				check=0;
				for(i=0; i<cnt; i++){
						if(b[i].accno() == acc_No){
							check=1;
							b[i].getDeatils();
							break;
						}
				}
				if(check==0){
					cout<<"Account not found"<<endl;;
				}
				
			cout<<"...your Accont Deatils sucessfuly check..."<<endl<<endl;
				
			break;
			
			case 3:
				cout<<"Enter your Account Number :";
				cin>>accNo;
				cout<<"Enter your Account Name :";
				cin>>name;
				cout<<"Enter your Deposite Amount :";
				cin>>accde;
				b[i].setCheck(accNo, name, accde);
				cout<<"...Your money successfully deposited..."<<endl<<endl;
			break;		
			
			case 4:
				cout<<"Enter your Account Number :";
				cin>>accNo;
				cout<<"Enter your Account Name :";
				cin>>name;
				cout<<"Enter your with_draw Amount :";
				cin>>accWd;
				b[i].getCheck(accNo, name, accWd);
				cout<<"...Your money successfully with_draw.."<<endl<<endl;
			break;			

		}
	}
}

