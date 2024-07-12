// WAP to perform Palindrome number using for loop and function

#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    for (int temp = num; temp != 0; temp /= 10) {
        int remainder = temp % 10;
        reversedNum = reversedNum * 10 + remainder;
    }

    if (originalNum == reversedNum) {
        return 1; 
            } else {
        return 0; 
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }
}
