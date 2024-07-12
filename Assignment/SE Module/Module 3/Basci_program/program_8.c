//circumference of Rectangle formula : C = 4 * a

#include <stdio.h>

int main() {
    float length, width, circumference;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    circumference = 4 * (length + width);

    printf("The circumference of the rectangle is: %.2f\n", circumference);

}

