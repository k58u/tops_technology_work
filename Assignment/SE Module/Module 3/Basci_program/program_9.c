//circumference of Triangle formula : triangle = a + b + c

#include <stdio.h>

int main() {
    float a, b, c, perimeter;

    printf("Enter the lengths of the sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    perimeter = a + b + c;

    printf("The perimeter of the triangle is: %.2f\n", perimeter);

}
