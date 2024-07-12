// Write a program to Mathematic operation like Addition, Subtraction, 
// Multiplication, Division Of two number using different parameters and 
// Function Overloading 

#include<iostream>
using namespace std;
int add_fun(int a,int b){
    cout<<"Addition of 2 Numbers:"<<a+b<<endl;
}
int sub_fun(int a,int b){
    cout<<"Subtraction of 2 Numbers:"<<a-b<<endl;
}
int mult_fun(int a,int b){
    cout<<"Multiply of 2 Numbers:"<<a*b<<endl;
}
int div_fun(int a,int b){
cout<<"Division of 2 Numbers:";
}
int main (){
    add_fun(112,3);
    sub_fun(15,5);
    mult_fun(100,4);
    div_fun(120,4);
}