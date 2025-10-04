#include <stdio.h>

char userInput[3];

int main(void) {
    printf("Enter a two-digit positive integer: ");
    scanf("%s", userInput);

if ((userInput[0] > '9' || userInput[0] < '0') ||
    (userInput[1] > '9' || userInput[1] < '0') ||
    (userInput[2] != '\0')) {
    printf("Invalid input!\n");
    return 0;
    } else {
        printf("The reversal is: %c%c\n", userInput[1], userInput[0]);
    }
    return 0;
}