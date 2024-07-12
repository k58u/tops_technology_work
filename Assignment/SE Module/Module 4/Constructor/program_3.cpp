// Write a C++ program to create a class called Car that has private 
// member variables for company, model, and year. Implement member 
// functions to get and set these variables. 

#include<iostream>
using namespace std;
class Car{
    private:
    string company,model;
    int year;
    public:
    void setcompany (string new_com){
    company=new_com;
    }
    void setmodel (string new_model){
        model=new_model;
    }
    void setyear(int new_year){
        year=new_year;
    }
    string getcompany(){
        return company;
    }
    string getmodel (){
        return model;
    }
    int getyear (){
        return year;
    }
};
int main (){
    Car car;
 string company,model;
 int year;
 cout<<"Car Details"<<endl;
 cout<<"Enter Car Company:";
 getline(cin,company);
 cout<<"Enter Car Model:";
 cin.ignore();
 getline(cin,model);
 cout<<"Enter Year:";
 cin>>year;
 car.setcompany(company);
 car.setmodel(model);
 car.setyear(year);
 cout<<"Company:"<<car.getcompany()<<endl;
 cout<<"Model:"<<car.getmodel()<<endl;
 cout<<"Year:"<<car.getyear()<<endl;
 }