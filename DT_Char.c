#include <stdio.h>

int main(void) {
  // prefixer - %c
  char a = 'A';
  printf("I am char - %c\n", a);

  char aa = 65;
  printf("I am char - %c\n", aa);

}


// ```c
// #include <stdio.h>
// ```

// This line includes the standard input/output library (`stdio.h`), which is necessary for using functions like `printf` to display output on the console.

// ```c
// int main(void) {
// ```

// This line is the beginning of the `main` function, which is the entry point of a C program. The `int` before `main` indicates that the function returns an integer, and `(void)` means that this function takes no arguments.

// ```c
//   char a = 'A';
// ```

// Here, a character variable named `a` is declared and initialized with the character 'A'. In C, characters are enclosed in single quotes.

// ```c
//   printf("I am char - %c\n", a);
// ```

// This line uses the `printf` function to print a message to the console. The `%c` inside the string is a format specifier, and it indicates that a character will be inserted at that position in the output. In this case, it's the character stored in the `a` variable. The `a` variable is replaced by 'A' when the program is executed.

// ```c
//   char aa = 65;
// ```

// Here, another character variable named `aa` is declared and initialized with the integer value 65. In C, you can assign integer values to character variables, and they will be interpreted as the ASCII value of the corresponding character. ASCII value 65 corresponds to the character 'A'.

// ```c
//   printf("I am char - %c\n", aa);
// ```

// This line is similar to the previous `printf` line, but it prints the character stored in the `aa` variable, which is also 'A' because it has an ASCII value of 65.

// When you run this program, it will produce the following output:

// ```
// I am char - A
// I am char - A
// ```

// So, the program demonstrates how characters can be assigned both as characters (e.g., 'A') and as integers (e.g., 65) and then printed to the console using the `%c` format specifier with the `printf` function.