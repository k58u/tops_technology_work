// Create a class person having members name and age. Derive a class student 
// having member percentage. Derive another class teacher having member 
// salary. Write necessary member function to initialize, read and write data. 
// Write also Main function (Multiple Inheritance) 


#include<iostream>
using namespace std;
class Person{
protected:
string name;
int age;
public:
void take(string n,int a){
    name=n;
    age=a;
}
void read(){
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Age:";
    cin>>age;
}
void display(){
    cout<<"Name"<<name<<endl;
    cout<<"Age"<<age<<endl;
}
};
class Student:public Person{
    private:
    double percentage;
public:
void set(string n,int a,double p){
take(n,a);
percentage=p;
}
void read(){
    Person ::read();
    cout<<"Enter Percentage:";
    cin>>percentage;
}
void display(){
    Person::display();
    cout<<"Percentage:"<<percentage<<endl;
}
};
class Teacher:public Person{
private:
double salary;
public:
void set(string n,int a,double s){
    take(n,a);
    salary=s;
}
void read(){
    Person::read();
    cout<<"Enter Salary:";
    cin>>salary;
}
void display(){
    Person::display();
    cout<<"Salary:"<<salary<<endl;
}
};
int main (){
    Student st;
    Teacher tc;
    cout<<"Enter Students Details:"<<endl;
    st.read();
    cout<<"Enter Teacher Details:"<<endl;
    tc.read();
    cout<<"..Students Details.."<<endl;
    st.display();
    cout<<"..Teacher Details.."<<endl;
    tc.display();
}
