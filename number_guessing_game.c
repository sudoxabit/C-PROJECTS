#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and 100
    int random_number = rand() % 101;
    int no_of_guesses = 0; 
    int guessed;

    // Start the guessing loop
    do {
        printf("Guess a number between 0 and 100:\n");
        scanf("%d", &guessed);
        no_of_guesses++;

        if (guessed < random_number) {
            printf("Too low! Try again.\n");
        } else if (guessed > random_number) {
            printf("Too high! Try again.\n");
        }

    } while (guessed != random_number);

    // When the loop ends, the correct number has been guessed
    printf("Congratulations! You guessed the correct number %d in %d attempts.\n", random_number, no_of_guesses);

    return 0;
}
