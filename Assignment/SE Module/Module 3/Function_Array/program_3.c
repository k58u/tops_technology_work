// WAP to find reverse of string using recursion

#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    if (strlen(str) <= 1) {
        printf("Reversed string: %s\n", str);
    } else {
        char temp = str[0];
        str[0] = str[strlen(str) - 1];
        str[strlen(str) - 1] = temp;

       reverseString(str + 1);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

   reverseString(str);

}
