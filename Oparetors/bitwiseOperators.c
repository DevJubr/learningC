#include <stdio.h>

int main() {
    // Bitwise AND (&) Operator
    int num1 = 5; // Binary: 0101
    int num2 = 3; // Binary: 0011
    int result_and = num1 & num2; // Result: 0001 (1 in decimal)

    // Bitwise OR (|) Operator
    int result_or = num1 | num2; // Result: 0111 (7 in decimal)

    // Bitwise XOR (^) Operator
    int result_xor = num1 ^ num2; // Result: 0110 (6 in decimal)

    // Left Shift (<<) Operator
    int num3 = 8; // Binary: 1000
    int result_left_shift = num3 << 2; // Result: 100000 (32 in decimal)

    // Right Shift (>>) Operator
    int num4 = 16; // Binary: 10000
    int result_right_shift = num4 >> 2; // Result: 0010 (2 in decimal)

    // Output the results
    printf("Bitwise AND result: %d\n", result_and);
    printf("Bitwise OR result: %d\n", result_or);
    printf("Bitwise XOR result: %d\n", result_xor);
    printf("Left Shift result: %d\n", result_left_shift);
    printf("Right Shift result: %d\n", result_right_shift);

    return 0;
}
