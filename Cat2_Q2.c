/*
Name:Sammy Mwangi Kuria 
Reg no : CT101/G/26462/25
*/
#include <stdio.h> //pre-processor derivative printf().
int main() {
    double hours, wage, gross_pay, total_tax, net_pay;

    // Get input from the user
    printf("Enter hours worked: ");
    scanf("%lf", &hours);
    printf("Enter hourly wage: ");
    scanf("%lf", &wage);

    // Calculate gross pay with overtime
    if (hours > 40) {
        gross_pay = (40 * wage) + ((hours - 40) * wage * 1.5);
    } else {
        gross_pay = hours * wage;
    }

    // Calculate total tax
    if (gross_pay > 600) {
        total_tax = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    } else {
        total_tax = gross_pay * 0.15;
    }

    // Calculate net pay
    net_pay = gross_pay - total_tax;

    // Print the results
    printf("\nGross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", total_tax);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}
