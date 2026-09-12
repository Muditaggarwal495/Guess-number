#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber;

    // Seed the random number generator
    srand(time(NULL));

    // Generate random number between 1 and 100
    randomNumber = (rand() % 100) + 1;

   
    printf("enter a number between 1 and 100:\n");
    int userInput;
    printf("You have 10 attempts to guess the number.\n");  
    scanf("%d", &userInput);
    int attempts = 0; 
    
    for (attempts = 1; attempts <= 10; attempts++) {
        if (userInput < randomNumber) {
            printf("Too low! Try again: ");
            scanf("%d", &userInput);
        } else if (userInput > randomNumber) {
            printf("Too high! Try again: ");
            scanf("%d", &userInput);
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts.\n", randomNumber, attempts);
            break;
        }
          
    }
    printf("You have %d scores the number \n", 10 - attempts);

    return 0;
}