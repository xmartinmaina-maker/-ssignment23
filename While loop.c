/*
Name:Martin Maina
Reg:CT100/G/26125/25
Description:While loop program
*/
#include <stdio.h>

int main() {
    float balance;

    // Ask user to enter initial balance
    printf("Enter your initial account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        float withdrawal;

        // Ask user for withdrawal amount
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdrawal);

        // Deduct withdrawal from balance
        balance -= withdrawal;

        // Display updated balance
        printf("Remaining balance: %.2f\n", balance);

        // Optional: warn if balance is low or negative
        if (balance <= 0) {
            printf("Your account balance is zero or negative. No further withdrawals allowed.\n");
        }
    }

    return 0;
}