// Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>

int main() {
    char str[100];
    int max_chars = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        max_chars++;
    }

    printf("Maximum number of characters in the string: %d\n", max_chars);

}
