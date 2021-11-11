/**
 * Write a program that calcilates the remaining balance on a loan after the
 * first, second and third monthly payment
 */

#include <stdio.h>

void prompt(const char *message) {
    printf(message);
    fflush(stdout);
}

int main(void) {
    // loan_amount is the balance, interest is interest rate, and monthly is
    // the montly payment
    float balance, interest, monthly_payment;

    prompt("Enter amount of loan: ");
    scanf("%f", &balance);
    printf("\n");

    prompt("Enter interest rate: ");
    scanf("%f", &interest);
    printf("\n");

    prompt("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("\n");

    // Each month the balance is decrease by the amount of the payment but
    // increased by balance * monthly interest rate.
    //
    // To find monthly interest, convert it to a percentage and divide by 12
    //

    float monthly_interest = (interest / 100.0f) / 12;

    balance = (balance - monthly_payment) + (balance * monthly_interest);
    printf("Balance remaining after first payment: $%.2f\n", balance);

    balance = (balance - monthly_payment) + (balance * monthly_interest);
    printf("Balance remaining after second payment: $%.2f\n", balance);

    balance = (balance - monthly_payment) + (balance * monthly_interest);
    printf("Balance remaining after third payment: $%.2f\n", balance);

}

