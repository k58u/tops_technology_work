//WAP to input the week number and print week day

#include <stdio.h>

int main() {
    int week_number;

   printf("Enter the week number (1-7): ");
    scanf("%d", &week_number);

    switch (week_number) {
        case 1:
            printf("Weekday: Monday\n");
            break;
        case 2:
            printf("Weekday: Tuesday\n");
            break;
        case 3:
            printf("Weekday: Wednesday\n");
            break;
        case 4:
            printf("Weekday: Thursday\n");
            break;
        case 5:
            printf("Weekday: Friday\n");
            break;
        case 6:
            printf("Weekday: Saturday\n");
            break;
        case 7:
            printf("Weekday: Sunday\n");
            break;
        default:
            printf("Invalid week number \n");
    }
}
