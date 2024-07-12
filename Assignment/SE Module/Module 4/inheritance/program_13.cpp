//  Write a program to find the max number from given two numbers 
// using friend function 
#include <iostream>
using namespace std;
class Max{
private:
    int num1,num2;
public:
    Max(int n1,int n2) : num1(n1), num2(n2) {}
    friend int findMax(Max);
};
int findMax(Max mx) {
    if (mx.num1 > mx.num2) {
        return mx.num1;
    } else {
        return mx.num2;
    }
}
int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    Max max(a, b);
    cout << "Maximum number is: " << findMax(max) << endl;
}