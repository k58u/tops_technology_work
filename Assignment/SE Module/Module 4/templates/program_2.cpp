// Write a program of to sort the array using templates 

#include <iostream>
using namespace std;
template <typename T, size_t N>
void sortArray(T (&arr)[N]) {
    for (size_t i = 0; i < N - 1; ++i) {
        for (size_t j = 0; j < N - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
template <typename T, size_t N>
void printArray(const T (&arr)[N]) {
    for (const auto& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
}
int main() {
    int intArray[] = {5, 2, 7, 1, 9, 3};
    cout << "Original integer array: ";
    printArray(intArray);
    sortArray(intArray);
    cout << "Sorted integer array: ";
    printArray(intArray);
}