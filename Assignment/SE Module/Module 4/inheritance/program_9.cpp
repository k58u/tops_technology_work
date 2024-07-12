// Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;
class Matrix {
private:
    int *data;
    int size;
public:
    Matrix(int n) {
        size = n;
        data = new int[size];
    }
    Matrix operator+( Matrix &other) {
        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.data[i] = this->data[i] + other.data[i];
        }
        return result;
    }
    void display() {
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
    void setValue(int index, int value) {
        if (index >= 0 && index < size) {
            data[index] = value;
        } else {
            cout << "Index out of range!" << endl;
        }
    }
};
int main() {
    Matrix matrix1(5);
    Matrix matrix2(5);
    for (int i = 0; i < 5; i++) {
        matrix1.setValue(i, i + 1);
    }
    for (int i = 0; i < 5; i++) {
        matrix2.setValue(i, (i + 1) * 2);
    }
    cout << "Matrix 1: ";
    matrix1.display();
    cout << "Matrix 2: ";
    matrix2.display();
    Matrix result = matrix1 + matrix2;
    cout << "Result of addition: ";
    result.display();
}
