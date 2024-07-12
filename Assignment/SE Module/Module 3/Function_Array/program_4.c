// WAP to find factorial using recursion
#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
   return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %llu\n", num, factorial(num));
    }
}
