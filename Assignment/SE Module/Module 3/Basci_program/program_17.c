//Calculate person’s insurance premium based on salary

#include <stdio.h>

int main() {
    float salary, premium;

  
    printf("Enter your salary: Rs");
    scanf("%f", &salary);

 
    if (salary < 30000) {
        premium = 0.02 * salary;
    } else if (salary >= 30000 && salary < 60000) {
        premium = 0.03 * salary;
    } else {
        premium = 0.05 * salary;
    }

   
    printf("Your insurance premium is: Rs %.2f\n", premium);

}
