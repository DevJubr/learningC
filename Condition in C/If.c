#include <stdio.h> // Include the standard input/output library for printing

int main() {
    int number = 10; // Declare and initialize a variable

    // Check if the 'number' variable is greater than 5
    if (number > 5) {
        // This block will execute if the condition is true
        printf("The number is greater than 5.\n");
    }

    // The program continues here after the 'if' block

    return 0; // Return 0 to indicate successful execution
}

// - We include the stdio.h library to use the printf function for printing.
// - We declare an integer variable number and initialize it to 10.
// - Inside the if statement, we check if number is greater than 5.
// - If the condition (number > 5) is true, the code inside the curly braces { ... } will execute.
// - In this case, it will print "The number is greater than 5." to the console because 10 is indeed greater than 5.
// - If the condition is false, the code inside the if block will be skipped, and the program will continue executing after the if block.
// - You can change the value of the number variable or modify the condition to experiment with different scenarios. The key is that the code inside the if block only executes if the specified condition is true.