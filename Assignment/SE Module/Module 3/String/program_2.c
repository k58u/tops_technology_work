//  Write a program in C to separate individual characters from a string.

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Individual characters separated from the string:\n");
    
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

}
