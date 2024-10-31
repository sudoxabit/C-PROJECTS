#include <stdio.h>
#include <stdlib.h>
#include <string.h> //lets create a struct first

struct student
{ // used for storing different types of data values

    char name[50]; // array name which can store upto 50 words
    int rollno;    // variable roll number int
    float marks;   // used float so that we can get an accurate marks
};

int main()
{
    // lets create a struct with name s for accesing it from the for loop
    struct student s[5];

    int i; // we will use this in for loop

    for (i = 0; i < 5; i++) // Loop for user inputs
    {                       // name
        printf("Enter name of  student %d :\n", i + 1);
        scanf("%s", &s[i].name);

        // NOW ROLL NUMBER :

        printf("Enter Roll Number  of  student %d :\n", i + 1);
        scanf("%d", &s[i].rollno);

        // MARKS

        printf("Enter Marks  of  student %d :\n", i + 1);
        scanf("%f", &s[i].marks);
    }

    for (i = 0; i < 5; i++) // Loop for user inputs
    {                       // name
        printf(" ------------------------------------------------------------|| THE RECORDS THAT WHERE ENTERED ARE ||------------------------------------------------------------------------  \n");
        printf(" ----------------------------------------------------------------------- || BELOW ||------------------------------------------------------------------------  \n");
        //
        printf("Name of Student %d: %s\n", i + 1, s[i].name);
        printf("Roll number of Student %d: %d\n", i + 1, s[i].rollno);
        printf("Marks of Student %d: %.2f\n", i + 1, s[i].marks);
    }
    return 0;
}