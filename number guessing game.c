/*
Name:Martin Maina
Reg:CT100/G/26125/25
Description:Number guessing game program
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 20
    secretNumber = rand() % 20 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 20.\n");

    // Loop until the correct guess
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != secretNumber);

    return 0;
}