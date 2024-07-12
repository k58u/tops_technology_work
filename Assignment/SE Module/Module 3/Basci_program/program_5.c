// Area of Cube formula : a = 6a2

#include <stdio.h>

int main() {
    double side, area;

    printf("Enter the length of the side of the cube: ");
    scanf("%lf", &side);

    area = 6 * side * side;

    printf("The surface area of the cube is: %.2lf\n", area);

}
