//convert minutes into seconds and hours

#include <stdio.h>

int main() {
    int minutes, hours, seconds;

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    minutes = minutes % 60;

    seconds = hours * 3600;

    printf("%d hours\n", hours);
    printf("%d minutes equals:\n", minutes);
    printf("%d seconds\n", seconds);
    
}
