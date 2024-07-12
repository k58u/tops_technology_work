// A
// A  B
// A  B  C
// A  B  C  D
// A  B  C  D  E

#include <stdio.h>

int main() {
    int rows = 5 , i, j;
    char ch = 'A';

    

   for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
        ch = 'A';  
         }
}
