// WAP to accept 5 numbers from user and check entered number is even or odd 
// using of array

#include <stdio.h>

int main() {
    int numbers[5];
    char *evenOdd[2] = {"Even", "Odd"}; // Array of string literals for even and odd

     printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nEven/Odd Check:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d is %s\n", numbers[i], numbers[i] % 2 == 0 ? evenOdd[0] : evenOdd[1]);
    }

}
