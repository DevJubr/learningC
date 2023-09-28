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


//  -  We include the stdio.h library for printing, as usual.
//  -  We declare and initialize an integer variable number with the value 7.
//  -  Inside the if statement, we first check if number is greater than 10. If this condition is true, it prints "The number is greater than 10."
//  -  If the first condition is false, the program moves to the else if part and checks if number is equal to 10. If this condition is true, it prints "The number is equal to 10."
//  -  If none of the previous conditions are true, the program executes the code inside the else block, printing "The number is less than 10."
//  -  The program then continues executing after the if-else-if-else block.