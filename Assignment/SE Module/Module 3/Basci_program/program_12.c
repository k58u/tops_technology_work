// Accept number of students from user. I need to give 5 apples to each 
// student. How many apples are required?
#include <stdio.h>

int main() {
    int NoStudents;
    
    printf("Enter the number of students: ");
    scanf("%d", &NoStudents);
    
    int totalApples = NoStudents * 5;
    
    printf("Total apples required: %d\n", totalApples);
    
}
