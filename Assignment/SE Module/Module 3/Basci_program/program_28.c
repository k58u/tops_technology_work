//Convert years into days and months

#include <stdio.h>

int main() {
    int years, days, months;

    printf("Enter the number of years: ");
    scanf("%d", &years);

    days = years * 365;
    months = years * 12;

    printf("%d years equals:\n", years);
    printf("%d days\n", days);
    printf("%d months\n", months);

    
}
