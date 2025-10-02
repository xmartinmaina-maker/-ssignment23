/*
Name: Martin Maina
Reg:  CT100/G/26125/25
Description: water unit billing program
*/

#include <stdio.h>

int main() {
  // Declare variables
  int unitsConsumed;
  float totalBill;

  // Get input from the user
  printf("Enter the number of water units consumed: ");
  scanf("%d", &unitsConsumed);

  // Calculate the bill using if-else if-else statements
  if (unitsConsumed >= 0 && unitsConsumed <= 30) {
    totalBill = unitsConsumed * 20.0;
  } else if (unitsConsumed >= 31 && unitsConsumed <= 60) {
    totalBill = unitsConsumed * 25.0;
  } else if (unitsConsumed > 60) {
    totalBill = unitsConsumed * 30.0;
  } else {
    printf("Invalid input. Units consumed cannot be negative.\n");
    return 1; // Indicate an error
  }

  // Display the total bill with two decimal places
  printf("Total bill: KES %.2f\n", totalBill);

  return 0;
}
