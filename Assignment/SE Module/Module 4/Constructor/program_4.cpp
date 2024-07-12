// Write a C++ program to implement a class called Bank Account that has 
// private member variables for account number and balance. Include 
// member functions to deposit and withdraw money from the account. 



#include <iostream>
#include<string>
using namespace std;
class Bankaccount{
    public:
    int acc_num,bal,amt,cur_bal;
    public:
        void deposit(){
            cout<<"Enter Deposite amount:"<<endl;
            cin>>amt;
           cout<<"Current Balance:"<<cur_bal+amt<<endl;
}
void checkbalance(){
    cur_bal=100000;
    cout<<endl<<"Your Current Balance is:"<<cur_bal<<endl;
}
void withdraw(){
    cout<<"Enter Withdrawl Ammount:";
    cin>>amt;
    cout<<"Current Balance:"<<cur_bal-amt<<endl;
}
};
    int main (){
        Bankaccount ba;
        int choice;
    cout<<"...Enter your choice..."<<endl;
    cout<<endl<<"1.Depositiion";
    cout<<endl<<"2.Withdrawl"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        ba.checkbalance();
        ba.deposit();
        break;
        case 2:
        ba.checkbalance();
        ba.withdraw();
        break;
 }
 }
    
