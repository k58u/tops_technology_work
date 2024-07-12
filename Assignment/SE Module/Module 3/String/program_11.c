// . Write a program in C to read a sentence and replace lowercase characters with 
// uppercase and vice versa.

#include <stdio.h>

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++) {
         if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
           
               sentence[i] = sentence[i] + 32;
        } else if (sentence[i] >= 'a' && sentence[i] <= 'z') {
           
            sentence[i] = sentence[i] - 32;
        }
    }

    printf("After converting case: %s\n", sentence);

}
