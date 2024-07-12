//Define a class to represent a bank account. 
//Include the following members: 
//Data Member: -Name of the depositor -Account Number -
//Type of Account -Balance amount in the account 
//Member Functions -To assign values -To deposited an amount -
//To withdraw an amount after checking balance -
//To display name and balance 


#include <iostream>
#include<string>
using namespace std;


class Bankaccount{
    public:
    string name,acc_type;
    int acc_num,bal,amt,cur_bal;
    public:
    void assignvalue(){
        cout<<"Enter the Details Below"<<endl;
        cout<<"depositer Name:";
        getline(cin,name);
        cout<<"Accouny Number:";
        cin>>acc_num;
        cout<<"Acoount type:";
        cin>>acc_type;
    }
        void deposit(){
            cout<<"Enter Deposite amount:"<<endl;
            cin>>amt;
            cout<<endl<<"depositer Name:"<<name<<endl<<"Current Balance:"<<cur_bal+amt<<endl;
}
void checkbalance(){
    cur_bal=5000;
    cout<<endl<<"Your Current Balance is:"<<cur_bal<<endl;
}
void withdraw(){
    cout<<"Enter Withdrawl Ammount:";
    cin>>amt;
    cout<<" name:"<<name<<endl<<"Current Balance:"<<cur_bal-amt<<endl;
}
};
    int main (){
        Bankaccount ba;
        ba.assignvalue();
        int choice;
    cout<<endl<<"1.Depositiion"<<endl;
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
    