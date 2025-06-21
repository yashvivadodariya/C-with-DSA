#include <iostream>
#include <vector>
using namespace std;

template <typename M>

class memoryCalc {
	
private:
	
    M id;
    string name;

public:
	
    memoryCalc(M id, string name) {
        this->id = id;
        this->name = name;
    }


    void display() {
        cout<< "Id of Student: "<<id<<endl;
        cout<< "Name of Student: "<<name<<endl<<endl;
    }


    M getId() {
        return id;
    }
};

main() {
    int choice, id;
    string name;
    vector<memoryCalc<int> > St;

    while (1) {
        cout<<"1. Add Student"<<endl;
        cout<<"2. Show All Students"<<endl;
        cout<<"3. Remove Student by ID"<<endl;
        cout<<"4. Search Student by ID"<<endl;
        cout<<"5. Exit "<<endl;
        
        cout<<"Enter Your Choice: ";
        cin>>choice;

        if(choice==5) {
            cout<<"...Thanks for using the system..."<<endl;
            break;
        }

	switch(choice) {
        	
        case 1:
        	
            cout<<"Enter id of Student: ";
            cin>>id;
            cout<<"Enter name of Student: ";
            cin>>name;

            St.push_back(memoryCalc<int>(id, name));
            cout<<"... STUDENT ADDED..."<<endl;
            
			break;

        case 2:
        	
            if(St.empty()) {
                cout<< "... list have no students ..."<<endl;
            } else {
                for (int i = 0; i < St.size(); i++) {
                    St[i].display();
                }
                cout<< "... list of students..." <<endl;
            }
            
            break;

        case 3:
        	
            if(St.empty()) {
                cout<< "... No Student is there to removed ..." <<endl;
            } else {
                cout<< "Enter id of student to remove: ";
                cin>>id;

            int index = -1;
            for(int i = 0; i < St.size(); i++) {
                if(St[i].getId() == id) {
                    index = i;
                    break;
                }
            }

		    if(index!= -1) {
				St.erase(St.begin() + index);
		        cout<<"... Student id is removed ..."<<endl;
		    }else{
		    	cout<<"... Student id isn't found' ..."<<endl;
		    }
			}
			
            break;

        case 4:
        	
            if(St.empty()) {
                cout<<"... No Student to be found ..."<<endl;
            } else{
                cout<<"Enter id of student to search: ";
                cin>>id;

                for(int i = 0; i < St.size(); i++) {
                    if(St[i].getId() == id) {
                        cout<<"... Student found ..."<<endl;
                        St[i].display();
                        break;
                    }
                    if(i == St.size() - 1) {
                        cout<<"... Student not found "<<endl;
                    }
                }
            } 
            
            break;
            
        default:

            cout<<"Invalid choice."<<endl;
        }
    }
}
