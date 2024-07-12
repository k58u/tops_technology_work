//Accept marks from user and check pass or fail

#include <stdio.h>

int main() {
    int marks;
    int PASSING = 40; 
    
    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks >= PASSING) {
        printf("Congratulations! You have passed.\n");
    } else {
        printf("Sorry! You have failed.\n");
    }
}
