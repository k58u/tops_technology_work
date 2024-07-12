// Write a program of to swap the two values using template 


#include <iostream>
using namespace std;
template <typename T>
void swapValues(T a, T b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    swapValues(num1, num2);
    cout << "After swapping integers: " << num1 << "," << num2 << endl;

}
