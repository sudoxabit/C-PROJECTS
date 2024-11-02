// IMPORTANT LIBRARIES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// AB HUM EK MAIN FUNCTION USE KARENGE JO KEH EK INT VALUE RETURN KRTA HAI

int main()
{
    printf("This is a mini shell program { - MADE BY XABIT - }\n"); // HEADING K LIYE 

    //KUCH WINDOWS COMMANDS jo keh user try kr sakhta hai 
printf("1. dir             # List files and directories in the current directory\n");
printf("2. cd <directory>  # Change to a specified directory\n");
printf("3. cls             # Clear the Command Prompt screen\n");
printf("4. copy <source> <destination>  # Copy files from source to destination\n");
printf("5. move <source> <destination>  # Move files from source to destination\n");
printf("6. del <file>      # Delete a specified file\n");
printf("7. mkdir <directory>  # Create a new directory\n");
printf("8. rmdir <directory>  # Remove a directory\n");
printf("9. ipconfig        # Display network configuration details\n");
printf("10. ping <host>    # Send ICMP echo requests to a specified host\n");


    //     Infinite Loop for Shell
    //     Ab hum ek infinite loop banayenge, jo humare shell ko continuously run karega.

    //  Ye line ek infinite loop banati hai.jiske liye hum while loop use karenge  1 ka matlab hai true,
    //  toh ye loop kabhi nahi rukega jab tak hum isse manually band nahi karte.
    while (1)
    { 
        //interface k liye 
        printf("mini-shell >> ");
        //  Ab hum user se input lene ke liye ek variable banayenge aur input ko read karne ke liye scanf function ka use karenge.
        char command[100];     // yaha 99 commands aayenge 1 null k liye reh jaayegi
        scanf("%s", &command); // scanf se input lenge aur &command se command[] array mai store karenge

        // Ab hum user se di gayi command ko execute karne ke liye system function ka use karenge.
        // Ye line command ko execute karne ke liye system function ka use karti hai.
        // Jo bhi command user ne enter kiya hai, wo is function ke zariye terminal mein run hota hai

        system(command); //<< ye hai command system commands ko srun krne k liye

        // Ab hum loop ko band karne ka ek option dene ke liye check karenge.

        if (strcmp(command, "exit") == 0)
        { // strcmp ek function hai jo 2 strings ko compare krne k liye use hoti hai
        printf("Exited ! ... SHELL HAS CLOSED \n");
            break;
        }
    }

    return 0;
}
