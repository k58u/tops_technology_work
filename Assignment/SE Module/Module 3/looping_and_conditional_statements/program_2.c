//WAP to accept 5 numbers from user and display all numbers

#include <stdio.h>

int main() {
    int i, num[5];

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    printf("Numbers entered by the user:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", num[i]);
    }

}
