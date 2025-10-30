#include <stdio.h>

int main() {
  // Display the menu
  printf("Mobile Data Bundles:\n");
  printf("1. 100 MB - 50 KES\n");
  printf("2. 500 MB - 200 KES\n");
  printf("3. 1 GB - 350 KES\n");
  printf("4. 2 GB - 600 KES\n");

  // Get user input
  int choice;
  printf("Enter your choice (1-4): ");
  scanf("%d", &choice);

  // Use a switch statement to display the bundle details
  switch (choice) {
    case 1:
      printf("You selected: 100 MB - 50 KES\n");
      break;
    case 2:
      printf("You selected: 500 MB - 200 KES\n");
      break;
    case 3:
      printf("You selected: 1 GB - 350 KES\n");
      break;
    case 4:
      printf("You selected: 2 GB - 600 KES\n");
      break;
    default:
      printf("Invalid choice\n");
  }

  return 0;
}
