#include <stdio.h>
#include <string.h>

// Function for strings that are equal or not
void checkEquality(char str1[], char str2[]) {
    if (strcmp(str1, str2) == 0)
        printf("The strings are equal.\n");
    else
        printf("The strings are NOT equal.\n");
}

// Function for copy a string
void copyString(char source[], char destination[]) {
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
}

// Function for concatenate two strings
void concatenateStrings(char str1[], char str2[]) {
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

// Function for displaying the string
void showString(char str[]) {
    printf("The string you entered is: %s\n", str);
}

// For reverse string
void reverseString(char str[]) {
    int len = strlen(str);
    printf("The string after reversing is: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

// For check if a string is a palindrome
void checkPalindrome(char str[]) {
    int len = strlen(str), i, flag = 1;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");
}

// Function to find a substring
void findSubstring(char str[], char sub[]) {
    if (strstr(str, sub) != NULL)
        printf("Substring found in the string.\n");
    else
        printf("Substring NOT found.\n");
}

// Main function
int main() {
    int choice;
    char str1[100], str2[100];

    do {
        printf("\nMain Menu\n");
        printf("1. Equality\n");
        printf("2. String Copy\n");
        printf("3. Concat\n");
        printf("4. Show\n");
        printf("5. Reverse\n");
        printf("6. Palindrome\n");
        printf("7. Sub String\n");
        printf("8. Exit\n");
        printf("Please Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                checkEquality(str1, str2);
                break;
            case 2:
                printf("Enter the string to copy: ");
                gets(str1);
                copyString(str1, str2);
                break;
            case 3:
                printf("Enter first string: ");
                gets(str1);
                printf("Enter second string: ");
                gets(str2);
                concatenateStrings(str1, str2);
                break;
            case 4:
                printf("Enter the string: ");
                gets(str1);
                showString(str1);
                break;
            case 5:
                printf("Enter the string: ");
                gets(str1);
                reverseString(str1);
                break;
            case 6:
                printf("Enter the string: ");
                gets(str1);
                checkPalindrome(str1);
                break;
            case 7:
                printf("Enter the main string: ");
                gets(str1);
                printf("Enter the substring to search: ");
                gets(str2);
                findSubstring(str1, str2);
                break;
            case 8:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        printf("\nDo you want to continue (Press 1 to continue)? ");
        scanf("%d", &choice);
        getchar();
    } while (choice == 1);

    printf("Program Terminated.\n");
    return 0;
}
