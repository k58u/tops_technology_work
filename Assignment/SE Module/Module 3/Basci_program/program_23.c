//WAP to calculate swap 2 numbers with using of multiplication and division

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    num1 = num1 * num2; 
    num2 = num1 / num2; 
    num1 = num1 / num2; 

    printf("After swapping using multiplication and division:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

}
