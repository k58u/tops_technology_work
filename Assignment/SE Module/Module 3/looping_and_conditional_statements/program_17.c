// Calculate 5 numbers from user and calculate number of even and odd using 
// of while loop

#include <stdio.h>

int main() {
    int i = 0;
    int number;
    int even_count = 0, odd_count = 0;

    printf("Enter 5 numbers:\n");
    
    while (i < 5) {
        printf("Number %d: ", i + 1);
        scanf("%d", &number);
        
        if (number % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        
        i++;
    }

    printf("Number of even numbers: %d\n", even_count);
    printf("Number of odd numbers: %d\n", odd_count);

}
