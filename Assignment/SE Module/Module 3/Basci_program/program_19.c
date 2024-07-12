//Calculate compound interest
#include <stdio.h>

int main() {
    float principal, rate, time, compoundInterest;
    int n;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in decimal): ");
    scanf("%f", &rate);

    printf("Enter the time the money is invested for (in years): ");
    scanf("%f", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    compoundInterest = principal * pow(1 + rate / n, n * time);

    printf("The compound interest is: %.2f\n", compoundInterest);

    
}
