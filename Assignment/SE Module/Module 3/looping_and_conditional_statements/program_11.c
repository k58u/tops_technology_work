// Accept 5 names from user at run time.
#include <stdio.h>

int main() {
    char name[50]; 
    int i;

    printf("Enter 5 names:\n");
    for (i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        scanf("%s", name); 
        printf("You entered: %s\n", name); 
    }
  
}
