//  Write a program in C to print individual characters of a string in reverse order

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Individual characters of the string in reverse order:\n");

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int i = length - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

}
