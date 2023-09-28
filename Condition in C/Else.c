#include <stdio.h>

int main() {
    int number = 3;

    // Check if the 'number' variable is greater than 5
    if (number > 5) {
        // This block will execute if the condition is true
        printf("The number is greater than 5.\n");
    } else {
        // This block will execute if the condition is false
        printf("The number is not greater than 5.\n");
    }

    // The program continues here after the 'if-else' block

    return 0;
}


// -  We still include the stdio.h library for printing.
// -  We declare and initialize an integer variable number with the value 3.
// -  Inside the if statement, we check if number is greater than 5.
// -  If the condition (number > 5) is true, the code inside the if block will execute, and it will print "The number is greater than 5."
// -  If the condition is false, the code inside the else block will execute instead, and it will print "The number is not greater than 5."
// -  The program will then continue executing after the if-else block.
// -  The else block provides an alternative set of instructions to execute when the if condition is false, giving you more control over the flow of your program.