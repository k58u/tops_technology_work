// Calculate sum of 10 numbers using of while loop

#include <stdio.h>

int main() {
    int i = 0;
    int sum = 0;
    int number;

    printf("Enter numbers:\n");
    
    while (i < 10) {
        printf("Number %d: ", i + 1);
        scanf("%d", &number);
        sum += number;
        i++;
    }

    printf("Sum of the 10 numbers: %d\n", sum);

}
