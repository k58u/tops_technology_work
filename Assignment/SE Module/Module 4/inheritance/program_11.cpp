// Write a program to calculate the area of circle, rectangle and triangle 
// using Function Overloading 
// Rectangle: Area * breadth 
// Triangle: ½ *Area* breadth 
// Circle: Pi * Area *Area 

#include<iostream>
using namespace std;
double area_circle(double radius){
    cout<<"Area of Circle: "<<3.14*radius*radius<<endl;
}
double area_triangle(double base ,double height){
    cout<<"Area of Triangle:"<<0.5 *base*height<<endl;
}
double area_rectangle(double length ,double width){
    cout<<"Area of Rectangle:"<<length*width<<endl;
}
int main(){
    area_circle(3);
    area_triangle(3,4);
    area_rectangle(3,4);
}