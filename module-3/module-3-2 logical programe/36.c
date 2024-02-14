/*
36. Write a C program to input electricity unit charges and calculate total 
electricity bill according to the given condition: 
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit 
An additional surcharge of 20% is added to the bill
*/

#include <stdio.h>

int main() {
    float unitCharges, totalBill, surcharge;

    // Input the electricity unit charges
    printf("Enter the electricity unit charges: ");
    scanf("%f", &unitCharges);

    // Calculate total bill based on unit charges
    if (unitCharges <= 50) {
        totalBill = 0.50 * unitCharges;
    } else if (unitCharges <= 150) {
        totalBill = 0.50 * 50 + 0.75 * (unitCharges - 50);
    } else if (unitCharges <= 250) {
        totalBill = 0.50 * 50 + 0.75 * 100 + 1.20 * (unitCharges - 150);
    } else {
        totalBill = 0.50 * 50 + 0.75 * 100 + 1.20 * 100 + 1.50 * (unitCharges - 250);
    }

    // Calculate surcharge (20% of total bill)
    surcharge = 0.20 * totalBill;

    // Add surcharge to the total bill
    totalBill += surcharge;

    // Display the result
    printf("Electricity Unit Charges: %.2f\n", unitCharges);
    printf("Total Bill: %.2f\n", totalBill);

    return 0;
}

