//Write a C program to check whether a triangle can be formed with the given 
//values for the angles

#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

   printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

  if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("Triangle can be formed with the given angles.\n");
    } else {
        printf("Triangle cannot be formed with the given angles.\n");
    }
}
