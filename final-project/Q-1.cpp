#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
		
};

class LinkedList{
	public:
		Node *head;
		int cnt;
		
		LinkedList(){
			head = NULL;
			cnt = 0;
		}
		
		void createNode(int num){
			Node *newNode = new Node(num);
			
			if(head == NULL){
				head = newNode;
			}else{
				Node *ppt = head;
				while(ppt->next != NULL){
					ppt=ppt->next;
				}
				ppt->next = newNode;
			}
			cnt++;
		}
		
		void viewNode(){
			if(head == NULL){
				cout<<"----Your EMPTY----"<<endl;
			}
			
			Node *ppt = head;
			
			while(ppt != NULL){
				cout<<" "<<ppt->data;
				ppt = ppt->next;
			}
			cout<<endl;
		}
		
		void deleteNode(int Position){
			if(Position<0 || Position>= cnt|| head==NULL){
				cout<<"----Position id Invalid----"<<endl;
			}
			Node *ppt;
			if(Position == 0){
				ppt = head;
				head = head->next;
			}
			else
			{
				Node *prev=head;
				for(int i = 0; i < Position-1; i++)
				{
					prev=prev->next;
				}
				ppt = prev->next;
				prev->next = ppt->next;
			}
			delete ppt;
			cnt--;
		}
		
		void reverseNode(){
			if(head == NULL || head->next == NULL){
				cout<<"----Reverse Unable----"<<endl;
			}
			
			Node *prevers = NULL;
			Node *cr = head;
			Node *next = NULL;
			
			while(cr != NULL){
				next = cr->next;
				cr->next = prevers;
				prevers = cr;
				cr= next;
			}
			head = prevers;
		}
};

main(){
	LinkedList list;
	int ch;
	int num;
	int Position;
	
	while(1){
		cout<<"Press 1 to Create Node "<<endl;
		cout<<"Press 2 to View Node "<<endl;
		cout<<"Press 3 to Delete Node "<<endl;
		cout<<"Press 4 to Reverse Node "<<endl;
		cout<<"Press 5 to Exit "<<endl;
		
		cout<<"Enter your choice: ";
		cin>>ch;
		
		if(ch==5){
			cout<<"----Thank You----"<<endl;
			break;
		}
		
		switch(ch){
			
			case 1:
				cout<<"Enter data : ";
				cin>>num;
				list.createNode(num);
				
				cout<<"----Successfully create----"<<endl;
			break;
			
			case 2:
				list.viewNode();	
				cout<<"----Viwe NODES----"<<endl;
			break;
			
			case 3:
				cout<<"Enter your Position : ";
				cin>>Position;
				list.deleteNode(Position);
				cout<<"----Successfully delete----"<<endl;
			break;
			
			case 4:
				list.reverseNode();
				cout<<"----Successfully reverse----"<<endl;
			break;
			
			default:
				cout<<"----Invalid Choice----"<<endl;		
		}
	}
}


