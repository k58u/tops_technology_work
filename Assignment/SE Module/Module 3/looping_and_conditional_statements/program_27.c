// 1 2 3 6 9 18 27 54...

#include <stdio.h>

int main() {
    int n;
    int term = 1;

   printf("Enter the number of terms: ");
    scanf("%d", &n);

   for (int i = 1; i <= n; i++) {
        printf("%d ", term);
        if (i % 2 == 1) {
             term *= 2;
        } else {
            term *= 3;
        }
    }
}
