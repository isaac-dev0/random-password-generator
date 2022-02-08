#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

// Create variable for the answer to the request of the variable.
int requestLength;
int shouldStore;
char passwordStr;

int main() {
    // Creates a text file called passwordOutput.txt with write permissions (hence "w" as mode), and opens the channel for writing data.
    FILE *exportData = fopen("passwordOutput.txt", "w");
    
    // Creating an array of characters and requesting the size of the array from the program.
    char charArr[74] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$^&*()[]?";
    int arrLen = sizeof charArr;

    printf("Please specify the length of the password you'd like to generate, between 8 and 24.\n");
    
    // Scanning the users input for an answer to the requested length.
    scanf("%d", &requestLength);

    // If the character entered into the system is not a valid number, or is greater than 24 or less than 8, print this statement and exit the program.
    if (requestLength > 24 || requestLength < 8) {
        system("clear");
        printf("Error: This character is not supported by the system. Please enter a value between 8 and 24.\n");
        sleep(2);
        system("clear");
        main();
    }
    // If the number entered into the system is less than 24, run this code and exit the program.
    else if (requestLength <= 24 || requestLength >= 8) {
        // Initiating variable to pull random items out of an array.
        time_t pullRandom;
        srand((unsigned)time(&pullRandom));
        printf("\nThe input entered has been accepted. Enjoy your randomly generated password:\n");
        printf("Password: ");
        // For each number in requestLength, run the code inside the curly braces.
        for (int x = 0; x < requestLength; x++) {
            // Printing a random item from the array to the amount of requested items.
            printf("%c", charArr[rand()%arrLen]);
            fprintf(exportData, "%c", passwordStr);
        }
        printf("\n");
        return 0;
    }
    // Close the write stream for appending data to the file.
    fclose(exportData);
    return 0;
}