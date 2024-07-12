// Write a program in C to count the total number of words in a string

#include <stdio.h>

int main() {
    char str[100];
    int words = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            words++;
        }
    }

    words++;

    printf("Total number of words in the string: %d\n", words);
}
