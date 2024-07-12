//Write a program in C to calculate and print the electricity bill of a given 
// customer. The customer ID, name, and unit consumed by the user should 
// be captured from the keyboard to display the total amount to be paid to the 
// customer. The charge are as follow :
// 20. Unit 21. Charge/unit
// 22. upto 350 23. @1.20
// 24. 350 and above but less than 600 25. @1.50
// 26. 600 and above but less than 800 27. @1.80
// 28. 800 and above 29. @2.00

#include <stdio.h>

int main() {
    int customer_id, units;
    char customer_name[50];
    float charge_per_unit, total_amount;

     printf("Enter customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter customer name: ");
    scanf("%s", customer_name);
    printf("Enter units consumed: ");
    scanf("%d", &units);

   if (units <= 350) {
        charge_per_unit = 1.20;
    } else if (units <= 600) {
        charge_per_unit = 1.50;
    } else if (units <= 800) {
        charge_per_unit = 1.80;
    } else {
        charge_per_unit = 2.00;
    }

    total_amount = units * charge_per_unit;

   printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %d\n", units);
    printf("Charge per Unit: %.2f\n", charge_per_unit);
    printf("Total Amount to be Paid: %.2f\n", total_amount);

}
