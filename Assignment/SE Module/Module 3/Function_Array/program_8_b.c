// b. Write a program of structure for five employee that 
// provides the following information -print and display 
// empno, empname, address andage

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
    struct Employee emp[5];

   for (int i = 0; i < 5; i++) {
        printf("\nEnter information for Employee %d:\n", i + 1);
        inputEmployeeInfo(&emp[i]);
    }

    printf("\nEmployee Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nDetails of Employee %d:\n", i + 1);
        displayEmployeeInfo(emp[i]);
    }
}
