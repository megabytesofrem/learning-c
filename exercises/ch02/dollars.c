/**
 * Write a program that asks the user to enter an amount in dollars and
 * shows how to pay that amount using the smallest amount of $20,  $10, $5
 * and $1 bills
 */

#include <stdio.h>

int main(void)
{
    int twenty, ten, five, one;
    int amount;

    printf("Enter a dollar amount: ");
    fflush(stdout);

    scanf("%d", &amount);

    // Calculate dollar bills
    twenty = amount / 20;
    amount -= (twenty * 20);

    ten = amount / 10;
    amount -= (ten * 10);

    five = amount / 5;
    amount -= (five * 5);

    one = amount / 1;
    amount -= (one * 1);

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);
}
