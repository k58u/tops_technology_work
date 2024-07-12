// Write a C++ program to create a class called Triangle that has private 
// member variables for the lengths of its three sides. Implement member 
// functions to determine if the triangle is equilateral, isosceles, or scalene. 


#include<iostream>
using namespace std;
class Triangle{
    private:
    double side1,side2,side3;
    public:
    void getdata(){
        cout<<"Enter length of Side 1:";
        cin>>side1;
        cout<<"Enter length of Side 2:";
        cin>>side2;
        cout<<"Enter length of Side 3:";
        cin>>side3;
    }
    string display(){
        if(side1==side2 && side2==side3){
            return "Equilateral";
}else if (side1==side2 || side2==side3||side1==side3){
            return "Isosceles";
        }else{
            return "Scalene";
        }
    }
};
int main (){
    Triangle tr;
    tr.getdata();
    cout<<"Triangle Type:"<<tr.display()<<endl;
}
