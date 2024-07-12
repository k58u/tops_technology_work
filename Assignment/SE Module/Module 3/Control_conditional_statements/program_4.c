// WAP to make simple calculator (operation include Addition, Subtraction, 
// Multiplication, Division, modulo) using conditional statement

#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    
    printf("Enter the sign : ");
    scanf(" %c", &operator);

    switch(operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero\n");
                return 1;
                }
            break;
        case '%':
            if (num2 != 0) {
                result = (int)num1 % (int)num2;
            } else {
                printf("Error: Modulo by zero\n");
                return 1; 
                }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1; 
    }


    printf("Result: %.2lf\n", result);


}
