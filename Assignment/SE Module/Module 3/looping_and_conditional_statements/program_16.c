// Calculate the Sum ofNatural Numbers Using the While Loop

#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

  
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum of natural numbers up to %d = %d\n", n, sum);

}
