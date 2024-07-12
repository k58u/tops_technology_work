// Write a program in C to extract a substring from a given string


#include <stdio.h>

int main() {
    char str[100], substr[100];
    int start, length;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the starting index of the substring: ");
    scanf("%d", &start);

    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    int j = 0;
    for (int i = start; i < start + length && str[i] != '\0'; i++) {
        substr[j++] = str[i];
    }
    substr[j] = '\0'; 
    printf("Substring extracted from the given string: %s\n", substr);

}
