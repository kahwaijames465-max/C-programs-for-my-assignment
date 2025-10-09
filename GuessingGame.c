/*
Name:James Kahwai 
Reg no:CT101/G/26490/25
Date:6/10/25
Description:C program for a number guessing game
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber=0;
    int guess=0;
    int attempts = 0;

    // Initialize random number generator
    srand(time(0));
    secretNumber = (rand() % 20) + 1;  

    printf("Welcome to the Number Guessing Game!\n");
    //prompt the user to enter 
    printf("I'm thinking of a number between 1 and 20.\n");

    // Loop until the player guesses correctly
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