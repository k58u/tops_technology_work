//Accept 5 expense from user and find average of expense

#include <stdio.h>

int main() {
    int expenses[5];
    int total = 0;
    float average;

 
    printf("Enter 5 expenses:\n");
    for (int i = 0; i < 5; i++) {
        printf("Expense %d: ", i + 1);
        scanf("%d", &expenses[i]);
        total += expenses[i];
    }

    average = (float)total / 5;

    printf("Average expense: %.2f\n", average);

}
