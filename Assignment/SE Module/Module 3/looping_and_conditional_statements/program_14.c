// Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>

int main() {
    int number;
    int i, j;
    int factorial;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &number);
        
        factorial = 1;
        for (j = 1; j <= number; j++) {
            factorial *= j;
        }
        printf("Factorial of %d: %d\n", number, factorial);
    }

}
