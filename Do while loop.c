/*
Name:Martin Maina
Reg:CT100/G/26125/25
Description:Do while loop program
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    // Repeat until correct password is entered
    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");

    return 0;
}