// Write a C++ Program to illustrates the use of Constructors in multilevel 
// inheritance 
#include <iostream>
using namespace std;
class Students {
protected:
    int rollNumber;
public:
    void setRollNumber(int roll) {
        rollNumber = roll;
    }
    int getRollNumber() {
        return rollNumber;
    }
};
class Test : public Students {
protected:
    float subject1Marks;
    float subject2Marks;
public:
    void setTestMarks(float marks1, float marks2) {
        subject1Marks = marks1;
        subject2Marks = marks2;
    }
    void displayTestMarks() const {
        cout << "Subject 1 Marks: " << subject1Marks << endl;
        cout << "Subject 2 Marks: " << subject2Marks << endl;
    }
};
class Result : public Test {
private:
    float totalMarks;
public:
    void calculateTotalMarks() {
        totalMarks = subject1Marks + subject2Marks;
    }
    void displayResult()  {
        cout << "Roll Number: " << getRollNumber() << endl;
        displayTestMarks();
        cout << "Total Marks: " << totalMarks << endl;
    }
};
int main() {
    Result rs;
    int rollNumber;
    float subject1Marks, subject2Marks;
    cout << "Enter Roll Number: ";
    cin >> rollNumber;
    rs.setRollNumber(rollNumber);
    cout << "Enter Subject 1 Marks: ";
    cin >> subject1Marks;
    cout << "Enter Subject 2 Marks: ";
    cin >> subject2Marks;
    rs.setTestMarks(subject1Marks, subject2Marks);
    rs.calculateTotalMarks();
    cout << "\nStudent Result:" << endl;
    rs.displayResult();
}