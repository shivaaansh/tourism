#include<iostream>
#include<string>
using namespace std;

class bank{
    string name;
    int acc_no;
    string acc_type;
    float acc_bal;


    public:
        void set_data(string n,int no,string type,float bal){
           name=n;
           acc_no=no;
           acc_type=type;
           acc_bal=bal;
        }
        
        void deposit(int amt){
            acc_bal+=amt;
            cout<<"deposition SUCESS of amount ->"<<amt<<endl;
        }
        float withdraw(int amt){
            if(acc_bal-amt<0){
                cout<<"insufficient funds"<<endl;
            }else{
                acc_bal-=amt;
                cout<<"withdraw SUCESS of amount ->"<<amt<<endl;
            }
        }
        int display(){
            cout<<"Acc number - "<<acc_no<<endl;
            cout<<"Name of customer - "<<name<<endl;
            cout<<"Balance of customer - "<<acc_bal<<endl;
            cout<<"Acc type is - "<<acc_type<<endl;
        }
};
int main(){
    bank *axis;
    int choice;
    do {
        
        cout << "Bank Menu:" << endl;
        cout << "1. Assign Initial Values" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Display Details" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout<<"Enter name ,acc_no,acc_type and acc_bal"<<endl;
                string name;
                int acc_no;
                string acc_type;
                float acc_bal;
                cin>>name>>acc_no>>acc_type>>acc_bal;
                break;
            }
            case 2: {
                // Deposit Money
                cout<<"Enter amount to deposit"<<endl;
                int dep;cin>>dep;
                (*axis).deposit(dep);
                break;
            }
            case 3: {
                cout<<"Enter amount to withdraw"<<endl;
                int wth;cin>>wth;
                (*axis).withdraw(wth);
                break;
            }
            case 4: {
                cout<<"Details are given below---"<<endl;
                (*axis).display();
                break;
            }
            case 5: {
                // Exit the program
                cout << "Exiting the program." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please enter a valid option." << endl;
            }
        }

    } while (choice != 5);
   
    

    return 0;
}