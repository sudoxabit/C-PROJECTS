#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    char *options[] = {"Rock", "Paper", "Scissors"};
    int rounds, userScore = 0, computerScore = 0;

    // Seed random number generator
    srand(time(0));

    // Initialize the game
    printf("Welcome to Rock-Paper-Scissors!\n");
    printf("Enter number of rounds: ");
    scanf("%d", &rounds);

    // Game loop
    for (int i = 0; i < rounds; i++) {
        printf("Choose: 0 for Rock, 1 for Paper, 2 for Scissors: ");
        scanf("%d", &userChoice);

        // Validate input
        if (userChoice < 0 || userChoice > 2) {
            printf("Invalid choice! Try again.\n");
            i--; // Repeat the round
            continue;
        }

        // Generate computer's choice
        computerChoice = rand() % 3;

        // Determine the winner
        printf("You chose: %s, Computer chose: %s\n", options[userChoice], options[computerChoice]);
        if (userChoice == computerChoice) {
            printf("It's a draw!\n");
        } else if ((userChoice == 0 && computerChoice == 2) ||
                   (userChoice == 1 && computerChoice == 0) ||
                   (userChoice == 2 && computerChoice == 1)) {
            printf("You win this round!\n");
            userScore++;
        } else {
            printf("Computer wins this round!\n");
            computerScore++;
        }

        // Display current score
        printf("Current Score - You: %d, Computer: %d\n\n", userScore, computerScore);
    }

    // Display final result
    if (userScore > computerScore) {
        printf("Congratulations! You are the overall winner!\n");
    } else if (userScore < computerScore) {
        printf("Computer is the overall winner! Better luck next time.\n");
    } else {
        printf("The game is a draw!\n");
    }

    printf("Thank you for playing!\n");
    return 0;
}
