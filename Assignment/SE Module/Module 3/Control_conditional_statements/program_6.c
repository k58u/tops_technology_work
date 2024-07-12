// Find the Character Is Vowel or Not
#include <stdio.h>

int main(){
    char ch;
    printf("Enter character:");
    scanf ("%c",&ch);

switch (ch)
{

case 'A':
    printf("A is a vowel.");
    break;
case 'E':
    printf ("E is a vowel.");
    break;
case 'I':
    printf("I is a vowel.");
    break;
case '0':
    printf ("0 is a vowel."); 
    break;
case 'U':
    printf("U is a vowel.");
    break;
default:
    printf("Its is Consonant");
    break;
    }
}