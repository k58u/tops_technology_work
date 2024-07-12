// Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>
using namespace std;
class Person{
protected:
string name;
int rollnumber;
public:
void setdata(string n, int roll){
    name=n;
    rollnumber=roll;
}
void displayperson(){
    cout<<"Name:"<<name<<endl;
    cout<<"Roll Number:"<<rollnumber<<endl;
}
};
class Marks{
    private:
    float physicsmarks;
   float chemistrymarks;
    float mathsmarks;
    public:
    void set(float physics,float chemistry,float maths){
        physicsmarks=physics;
        chemistrymarks=chemistry;
        mathsmarks=maths;
    }
    void displaymarks(){
        cout<<" Marks in Physics:"<<physicsmarks<<endl;
        cout<<" Marks in Chemistry:"<<chemistrymarks<<endl;
        cout<<" Marks in Maths:"<<mathsmarks<<endl;
    }
};
class MarkSheet:public Person ,public Marks{
    public:
    void setmarksheet(string n,int roll,float physics,float chemistry,float maths){
        setdata(n ,roll);
        set(physics,chemistry,maths);
    }
    void displaymarksheet(){
        cout<<"......Student Marks Sheet...."<<endl;
        displayperson();
        displaymarks();
    }
};
int main (){
    MarkSheet mark;
    string name;
    int rollnumber;
    float physicsmarks,chemistrymarks,mathsmarks;
    cout<<"Enter Student name:";
    getline(cin,name);
    cout<<"Enter Rollnumber:";
    cin>>rollnumber;
    cout<<"Enter marks in Physics:";
    cin>>physicsmarks;
    cout<<"Enter marks in Chemistry:";
    cin>>chemistrymarks;
    cout<<"Enter marks in Maths:";
    cin>>mathsmarks;
    mark.setmarksheet(name,rollnumber,physicsmarks,chemistrymarks,mathsmarks);
    mark.displaymarksheet();
}