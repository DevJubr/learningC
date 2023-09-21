#include <stdio.h>

int main() {
    // Assignment Operator (=)
    int x = 10;
    printf("x = %d\n", x); // Prints: x = 10

    // Compound Assignment Operators (+=, -=, *=, /=, %=)

    // Addition Assignment (+=)
    x += 5;
    printf("x += 5: x = %d\n", x); // Prints: x += 5: x = 15

    // Subtraction Assignment (-=)
    x -= 3;
    printf("x -= 3: x = %d\n", x); // Prints: x -= 3: x = 12

    // Multiplication Assignment (*=)
    x *= 2;
    printf("x *= 2: x = %d\n", x); // Prints: x *= 2: x = 24

    // Division Assignment (/=)
    x /= 4;
    printf("x /= 4: x = %d\n", x); // Prints: x /= 4: x = 6

    // Modulus Assignment (%=)
    x %= 5;
    printf("x %%= 5: x = %d\n", x); // Prints: x %= 5: x = 1

    return 0;
}
