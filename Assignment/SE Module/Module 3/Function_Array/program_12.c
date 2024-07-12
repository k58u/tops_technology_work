// WAP to accept 5 students name and store it in array
#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50]; 
    
       printf("Enter names of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name of student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nNames of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, names[i]);
    }
}
