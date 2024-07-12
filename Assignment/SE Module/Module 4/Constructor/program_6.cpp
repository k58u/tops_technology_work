// Write a C++ program to implement a class called Employee that has 
// private member variables for name, employee ID, and salary. Include 
// member functions to calculate and set salary based on employee 
// performance. Using of constructor 


#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int employeeID;
    double baseSalary;
public:
    Employee(string n, int id, double salary) : name(n), employeeID(id), baseSalary(salary) {}
    void setSalaryPerformance(double performanceRating) {
        if (performanceRating >= 0.0 && performanceRating <= 5.0) {
            double bonus = baseSalary * performanceRating;
            double newSalary = baseSalary + bonus;
            baseSalary = newSalary;
         }
    }
    string getName()  { return name; }
    int getEmployeeID() { return employeeID; }
    double getBaseSalary(){ return baseSalary; }
};

int main() {
    string name;
    int id;
    double salary;
    cout << "Enter employee name: ";
    getline(cin, name); 
    cout << "Enter employee ID: ";
    cin >> id;
    cout << "Enter base salary: ";
    cin >> salary;
    Employee emp(name, id, salary);
    double performanceRating;
    cout << "Enter employee performance rating (0.0 to 5.0): ";
    cin >> performanceRating;
    emp.setSalaryPerformance(performanceRating);
    cout << "Employee Details:" << endl;
    cout << "Name: " << emp.getName() << endl; 
    cout << "Employee ID: " << emp.getEmployeeID() << endl;
    cout << "Salary: " << emp.getBaseSalary() << endl; 
}
