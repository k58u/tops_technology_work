// First pattern
// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1

#include <stdio.h>

int main() {
    int rows = 5 , i, j;

  
   for (i = 1; i <= rows; i++) {
         for (j = 1; j <= i; j++) {
            if (j % 2 == 0) {
                printf("0 ");
            } else {
                printf("1 ");
            }
        }
        printf("\n");
    }
}
