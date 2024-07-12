//WAP to show
// i. Monday to Sunday using switch case
// ii. Vowel or Consonant using switch case

#include <stdio.h>

int main() {
    int day_number;
    char ch;

    printf("Enter the day number (1-7): ");
    scanf("%d", &day_number);

    switch (day_number) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day number. Please enter a number between 1 and 7.\n");
    }

    printf("\n***********************************************************\n");

     printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        ch -= 32;
    }

    switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel\n");
            break;
        default:
            if (ch >= 'A' && ch <= 'Z') {
                printf("Consonant\n");
            } else {
                printf("Invalid character. Please enter an alphabet.\n");
            }
    }
}
