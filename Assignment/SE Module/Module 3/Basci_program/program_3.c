// Program to Find Area And Circumference of Circle


#define PI 3.14
#include<stdio.h>
int main() {
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    circumference = 2 * PI * radius;

    printf("Area of the circle: %.2f\n", area);
    
    printf("Circumference of the circle: %.2f\n", circumference);

}