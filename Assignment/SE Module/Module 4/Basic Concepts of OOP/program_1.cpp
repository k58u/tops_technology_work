//WAP to create simple calculator using class 
#include <iostream>
using namespace std;
class Calculator {
public:
    float add(float x, float y) {
        return x + y;
    }
    float subtract(float x, float y) {
        return x - y;
    }
    float multiply(float x, float y) {
        return x * y;
    }
    float divide(float x, float y) {
        if (y == 0) {
            cout << "Cannot divide by zero" << endl;
            return 0; 
        } else {
            return x / y;
        }
    }
};

int main() {
    Calculator calc;
    float num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction:" << calc.subtract(num1, num2) << endl;
    cout << "Multiply:" << calc.multiply(num1, num2) << endl;
    cout << "Divide:" << calc.divide(num1, num2) << endl;
}
