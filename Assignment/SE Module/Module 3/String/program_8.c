// Write a program in C to count the total number of vowels or consonants in a 
// string.

#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   for (int i = 0; str[i] != '\0'; i++) {
   
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32; 
                 }
        if ((ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

}
