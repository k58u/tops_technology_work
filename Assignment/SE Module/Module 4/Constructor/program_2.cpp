// Write a program of Addition, Subtraction, Division, Multiplication using 
// constructor.


#include<iostream>
using namespace std;
class Calculator{
    private:
    double num1,num2;
    public:
    Calculator(double a,double b){
        num1=a;
        num2=b;
    }
    double add(){
        return num1+num2;
    }
    double sub(){
        return num1-num2;
    }
    double multi(){
        return num1*num2;
    }
    double div(){
        if (num2!=0)
        return num1/num2;
        else{
        cout<<"Error"<<endl;
        return 0;
        }
    }
};
int main (){
    int a,b;
    cout<<"Enter Two numbers";
    cin>>a>>b;
    Calculator calc(a,b);
    cout<<"Addition of numbers:"<<calc.add()<<endl;
    cout<<"Subtraction of numbers:"<<calc.sub()<<endl;
    cout<<"Multiplaction of numbers:"<<calc.multi()<<endl;
    cout<<"Division of NUmbers:"<<calc.div()<<endl; 
}
