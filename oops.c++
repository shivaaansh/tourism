
#include<iostream>
#include<string>
using namespace std;
struct Employee {
        int emp_id;
        string name;
        int salary;
    };
int main (){
    //wap to demonstrate the use of structures 
    Employee company[100];
    for(int i =0 ;i<100 ;i++){
        cout<<"enter the emp id"<<endl;
        cin>>company[i].emp_id;
        cout<<"enter the emp name"<<endl;
        cin>>company[i].name;
        cout<<"enter the emp salary"<<endl;
        cin>>company[i].salary;
    }
    
    return 0;
}
