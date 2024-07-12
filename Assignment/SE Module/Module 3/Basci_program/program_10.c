//area of a rectangular prism formula : A=2(wl+hl+hw)

#include <stdio.h>

int main() {
    float width, length, height;
    float area;

    printf("Enter width: ");
    scanf("%f", &width);

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter height: ");
    scanf("%f", &height);

    area = 2 * (width * length + height * length + height * width);

    printf("Area of the rectangular prism: %.2f\n", area);

}
