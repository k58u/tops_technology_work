//Convert country’s name in abbreviate form 

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    
    printf("Enter a country name: ");
    scanf("%s", str);
    
    for(int i = 0; i < 2; i++) {
        str[i] = toupper(str[i]);
    }
    
    printf("Abbreviated form %c%c\n", str[0], str[1]);
    
}