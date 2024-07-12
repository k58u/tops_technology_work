// Accept 3 numbers from user using while loop and check each numbers 
// palindrome

#include <stdio.h>

int main() {
    int num, originalNum, reversedNum, remainder;

    int count = 0;
    while (count < 3) {
         printf("Enter a number: ");
        scanf("%d", &num);

        originalNum = num;
        reversedNum = 0;

        while (num != 0) {
            remainder = num % 10;
            reversedNum = reversedNum * 10 + remainder;
            num /= 10;
        }

        if (originalNum == reversedNum) {
            printf("%d is a palindrome.\n", originalNum);
        } else {
            printf("%d is not a palindrome.\n", originalNum);
        }

        count++;
    }

}
