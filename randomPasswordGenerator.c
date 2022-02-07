#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// Create variable for the answer to the request of the variable.
int requestLength;

char charArr[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$^&*()[]?";
int arrLen = sizeof charArr;

int main() {
    printf("Please specify the length of the password you'd like to generate, between 8 and 24.\n");
    // Scanning the users input for an answer to the requested length.
    scanf("%d", &requestLength);
    // If the character entered into the system is not a valid number, or is greater than 24 or less than 8, print this statement and exit the program.
    if (requestLength > 24 || requestLength < 8) {
        printf("\nError: This character is not supported by the system. Please enter a value between 8 and 24.\n");
        return 0;
    }
    // If the number entered into the system is less than 24, run this code and exit the program.
    else if (requestLength <= 24 || requestLength >= 8) {
        // Initiating variable to pull random items out of an array.
        time_t pullRandom;
        srand((unsigned)time(&pullRandom));
        printf("\nInput entered has been accepted, please wait whilst we randomly generate your password!\n");
        // For each number in requestLength, run the code inside the curly braces.
        for (int x = 0; x < requestLength; x++) {
            // Printing a random item from the array to the amount of requested items.
            printf("%c", charArr[rand()%arrLen]);
        }
        printf("\n");
        return 0;
    }
    return 0;
}
