#include <stdio.h>

int main() {
    int number = 7;

    // Check if the 'number' variable is greater than 10
    if (number > 10) {
        // This block will execute if the condition is true
        printf("The number is greater than 10.\n");
    } else if (number == 10) {
        // This block will execute if the first condition is false, but this one is true
        printf("The number is equal to 10.\n");
    } else {
        // This block will execute if none of the previous conditions are true
        printf("The number is less than 10.\n");
    }

    // The program continues here after the 'if-else-if-else' block

    return 0;
}
