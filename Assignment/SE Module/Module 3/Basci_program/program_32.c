//Accept 2 numbers and find out its sum check it size

#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("The sum is: %d\n", sum);

    int size = 1;
    int tempSum = sum;
    while (tempSum /= 10)
        size++;

    printf("The sum has %d digit(s).\n", size);

}
