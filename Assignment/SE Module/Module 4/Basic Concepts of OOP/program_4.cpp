// Write a C++ program to implement a class called Circle that has private 
// member variables for radius. Include member functions to calculate the 
// circle's area and circumference. 
#include<iostream>

using namespace std;

class Circle {
    private:
    double radius;
    public:
    Circle(double r):radius(r){}
    double area (){
        return 3.14 *radius *radius;
    } 
    double circumference(){
        return 2* 3.14 *radius;
    }
};
int main (){
    double radius;
    cout<<"Enter the Radius of Circle:";
    cin>>radius;
    Circle cr(radius);
    cout<<"Area of Circle :"<<cr.area()<<endl;
    cout<<"Circumference:"<<cr.circumference()<<endl;
}
