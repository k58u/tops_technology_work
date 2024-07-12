// Write a program to swap the two numbers using friend function 
// without using third variable 

#include <iostream>
using namespace std;
class Number {
public:
    int num;
    Number(int n) : num(n) {}
    friend void swapNumbers(Number&, Number&);
};
void swapNumbers(Number& num1, Number& num2) {
    num1.num = num1.num + num2.num;
    num2.num = num1.num - num2.num;
    num1.num = num1.num - num2.num;
}
int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    Number num1(a);
    Number num2(b);
    cout << "Before swapping:" << endl;
    cout << "First number: " << num1.num << endl;
    cout << "Second number: " << num2.num << endl;
    swapNumbers(num1, num2);
    cout << "After swapping:" << endl;
    cout << "First number: " << num1.num << endl;
    cout << "Second number: " << num2.num << endl;
}