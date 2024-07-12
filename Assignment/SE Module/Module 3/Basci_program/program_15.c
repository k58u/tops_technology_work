//Convert school’s name in abbreviated form
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char schoolName[100];
    int i;
    char *token;

    printf("Enter the school name: ");
    fgets(schoolName, sizeof(schoolName), stdin);

    printf("Abbreviation: ");

    token = strtok(schoolName, " ");
    if (token) {
        printf("%c.", toupper(*token));
    }

    while ((token = strtok(NULL, " ")) != NULL) {
        printf("%c.", toupper(*token));
    }

    printf("\n");

}