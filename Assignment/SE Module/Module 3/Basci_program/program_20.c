// . Accept monthly salary from the user and deduct 10% insurance premium, 
// 10% loan installment find out of remaining salary

#include <stdio.h>

int main() {
    float salary, remaining_salary, insurance, loan_installment;

    printf("Enter your monthly salary: ");
    scanf("%f", &salary);

    insurance = 0.1 * salary;

    remaining_salary = salary - insurance;

    loan_installment = 0.1 * remaining_salary;

    remaining_salary -= loan_installment;

    printf("Your remaining salary after deducting insurance premium and loan installment: %.2f\n", remaining_salary);

    
}
