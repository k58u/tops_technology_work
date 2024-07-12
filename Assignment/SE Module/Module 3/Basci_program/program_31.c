// Convert kilometers into meters

#include <stdio.h>

int main() {
    float kilometers, meters;

    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    meters = kilometers * 1000;

    printf("%.2f kilometers equals %.2f meters.\n", kilometers, meters);

}
