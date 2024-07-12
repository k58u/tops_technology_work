// WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 
// 82746

#include <stdio.h>

int main() {
    int number, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

   while (number != 0) {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }
    printf("Number in reverse order: %d\n", reverse);
}
