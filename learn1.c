// simple program for requesting user input
/*
Name: Martin Maina
Reg:  CT100/G/26125/25
Description: User input program
*/
#include <stdio.h>

int main() {
    int phone;
    float height;
    int weight;
    
    
    printf("Enter your phone: ");
    scanf("%d", &phone);
    
    printf("Enter your height: ");
    scanf("%f", &height);
    
    printf("Enter your weight: ");
    scanf(" %c", &weight);

    return 0;
}