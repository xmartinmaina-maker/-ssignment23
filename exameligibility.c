/*
Name: Martin Maina
Reg:  CT100/G/26125/25
Description: Exam eligibility check program
*/

#include <stdio.h>

int main() {
  // Declare variables
  int attendancePercentage;
  float averageMarks;

  // Get input from the user
  printf("Enter the student's attendance percentage: ");
  scanf("%d", &attendancePercentage);

  printf("Enter the student's average marks: ");
  scanf("%f", &averageMarks);

  // Check eligibility
  if (attendancePercentage >= 75 && averageMarks >= 40) {
    printf("Eligible for final exams.\n");
  } else {
    printf("Not eligible.\n");
  }

  return 0;
}
