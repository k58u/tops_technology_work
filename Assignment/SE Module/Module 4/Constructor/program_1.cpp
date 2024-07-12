//Write a program to find the multiplication values and the cubic values using 
//inline function 

#include<iostream>
using namespace std;

inline int multiply (int a,int b){

return a*b;
}
inline int cube (int num){
    return num*num*num;
}
int main (){
    int num,multi;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"Enter the number to multiply by:";
    cin>>multi;
    cout<<"Multiplication of Number is:"<<multiply(num,multi)<<endl;
    cout<<"Cube of number is: "<<cube(num)<<endl;
}
