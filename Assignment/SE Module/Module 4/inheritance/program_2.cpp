//Write a C++ Program to find Area of Rectangle using inheritance 

#include<iostream>
using namespace std;
class Shape{
    protected:
    double length, width;
    public:
    void setwidth(double w){
    width=w;
    }
    void setlength(double l){
        length=l;
    }
};
class Rectangle:public Shape{
public:
double getarea(){
    return width * length;
}
};
int main (){
    Rectangle rt;
    double width,length;
    cout<<"Enter the Width of Rectangle:";
    cin>>width;
    cout<<"Enter the Length of Rectangle:";
    cin>>length;
    rt.setwidth(width);
    rt.setlength(length);
    cout<<"The Area of Rectangle is "<<rt.getarea()<<endl;
};
