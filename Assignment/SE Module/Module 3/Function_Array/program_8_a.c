// Write a program of structure employee that provides the following
// a. information -print and display empno, empname, address 
// andage

#include <stdio.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void inputEmployeeInfo(struct Employee *emp) {
    printf("Enter Employee Number: ");
    scanf("%d", &emp->empno);
    printf("Enter Employee Name: ");
    scanf("%s", emp->empname);
    printf("Enter Address: ");
    scanf("%s", emp->address);
    printf("Enter Age: ");
    scanf("%d", &emp->age);
}

void displayEmployeeInfo(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    struct Employee emp;

    inputEmployeeInfo(&emp);

    printf("\nEmployee Information:\n");
    displayEmployeeInfo(emp);

}
