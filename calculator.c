#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf("-----------------------------------------------BASIC-CALCULATOR -----------------------------------------------------\n");
    printf("---------------------------------------------------PROJECT-------------------------------------------------------------------\n");
    // USAGE :
    printf("    USAGE :\n");
    printf("    ENTER 1 FOR ADDITION\n");
    printf("    ENTER 2 FOR SUBTRACTION\n");
    printf("    ENTER 3 FOR MULTIPLICATION\n");
    printf("    ENTER 4 FOR DIVISION\n");

    // LET'S CREATE VARIABLES :
    int value_1, value_2;
    int operator;

    // User input for giving values and operator 
    printf("\n");
    printf("Enter first number: ");
    scanf("%d", &value_1);   // for first number 

    printf("Enter second number: ");
    scanf("%d", &value_2);   // for second number 

    printf("Enter a number from above for an operator: ");
    scanf("%d", &operator); // user input for an operator 

    // LET'S CREATE A CONDITION USING switch case
    switch (operator)
    {
    case 1 :
    printf("The addition of %d and %d is %d",value_1,value_2,value_1+value_2);
        break;   // break statements to end up the process after the condition is true

    case 2 :
    printf("The subtraction of %d and %d is %d",value_1,value_2,value_1-value_2);
        break;

    case 3 :
    printf("The Multiplication of %d and %d is %d",value_1,value_2,value_1*value_2);
        break;

    case 4 :
    printf("The Division of %d and %d is %d",value_1,value_2,value_1/value_2);
        break;
    
    default:
    printf("Try again wrong input");
        break;
    }

    return 0;
}
