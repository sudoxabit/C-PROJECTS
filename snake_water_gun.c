#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf(" ALGORITHM GAME \n MADE BY XABIT \n "); // BANNER
    printf("USAGE:\n"); // USAGE
    printf("ENTER 1 for choosing snake\n");
    printf("ENTER 2 for choosing water\n");
    printf("ENTER 3 for choosing gun\n");

    // CREATING 2 PLAYERS
    srand(time(0)); // Seed the random number generator
    int player, computer = rand() % 3 + 1; // Generates a number between 1 and 3

    printf("Enter your number: ");
    scanf("%d", &player);

    // Print the computer's choice for clarity
    printf("Computer chose: %d\n", computer);

    // DRAW SCENE CONDITIONS
    if (player == computer) {
        printf("Game draw\n");
    }

    // PLAYER WINNING CONDITIONS
    if (player == 1 && computer == 2) { // Snake beats Water
        printf("YOU WIN! Snake beats Water.\n");
    } else if (player == 2 && computer == 3) { // Water beats Gun
        printf("YOU WIN! Water beats Gun.\n");
    } else if (player == 3 && computer == 1) { // Gun beats Snake
        printf("YOU WIN! Gun beats Snake.\n");
    }

    // COMPUTER WINS CONDITIONS
    if (player == 2 && computer == 1) { // Water loses to Snake
        printf("YOU LOSE! Snake beats Water.\n");
    } else if (player == 3 && computer == 2) { // Gun loses to Water
        printf("YOU LOSE! Water beats Gun.\n");
    } else if (player == 1 && computer == 3) { // Snake loses to Gun
        printf("YOU LOSE! Gun beats Snake.\n");
    }

    return 0;
}
