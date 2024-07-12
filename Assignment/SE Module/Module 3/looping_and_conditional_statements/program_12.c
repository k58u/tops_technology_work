// Program of Armstrong Number in C Using For Loop & While Loop


// Using for loop
#include <stdio.h>

int main() {
    int number, originalNumber, remainder, result = 0, n = 0, temp;
    
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;
    temp = number;

    for (temp = number; temp != 0; temp /= 10) {
        ++n;
    }

    for (temp = number; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += remainder * remainder * remainder;
    }

    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

// using while loop
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;
    temp = number;

   while (temp != 0) {
        ++n;
        temp /= 10;
    }

    temp = number;
    while (temp != 0) {
        remainder = temp % 10;
        result += remainder * remainder * remainder;
        temp /= 10;
    }

     if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);


}
