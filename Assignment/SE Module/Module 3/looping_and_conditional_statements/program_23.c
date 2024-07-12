// 1 + 2 + 3 + 4 + 5 + ... + n

#include <stdio.h>

int main() {
    int n, sum;

   printf("Enter the value of n: ");
    scanf("%d", &n);

     sum = (n * (n + 1)) / 2;

   printf("Sum of the series: %d\n", sum);

}
