// If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe 
// minimum bill should be of Rs. 256/-

#include <stdio.h>

int main() {
    int units;
    float charge_per_unit, total_amount, surcharge = 0.0;

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

   if (total_amount > 800) {
        surcharge = total_amount * 0.18;
        total_amount += surcharge;
    }

    if (total_amount < 256) {
        total_amount = 256; 
    }

    printf("Total amount to be paid: Rs. %.2f\n", total_amount);
}
