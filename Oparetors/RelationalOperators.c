#include <stdio.h>
#include <stdbool.h>


int main () {
int a = 10;
int b = 20;

// = = (equal to): Checks if two operands are equal.
bool et = a == b;
printf("a is equal to b - %d\n", et);

// ! = (not equal to): Checks if two operands are not equal.
bool net = a != b;
printf("a is equal to b - %d\n", net);

// < (less than): Checks if the left operand is less than the right operand.
bool lst = a > b;
printf("a is equal to b - %d\n", lst);

    return 0;
}