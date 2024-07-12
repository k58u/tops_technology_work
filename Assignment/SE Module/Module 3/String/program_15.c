// Write a program in C to find the largest and smallest words in a string

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    char smallest_word[100], largest_word[100];
    int i, j, start = 0, end = 0, min_length = 100, max_length = 0;

    printf("Enter a string: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; i <= strlen(sentence); i++) {
         if (sentence[i] == ' ' || sentence[i] == '\0') {
            end = i - 1;

            int length = end - start + 1;

            if (length < min_length && length > 0) {
                min_length = length;
                for (j = start; j <= end; j++) {
                    smallest_word[j - start] = sentence[j];
                }
                smallest_word[j - start] = '\0';
            }

            if (length > max_length) {
                max_length = length;
                for (j = start; j <= end; j++) {
                    largest_word[j - start] = sentence[j];
                }
                largest_word[j - start] = '\0';
            }

 start = i + 1;
        }
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

}
