#include <stdio.h>
#include <stdbool.h>


int main () {
int a = 10;
int b = 20;

// = = (equal to): Checks if two operands are equal.
bool et = a == b;
printf("a is equal to b - %d\n", et);

// ! = ( equal to): Checks if two operands are not equal.
bool net = a != b;
printf("a is not equal to b - %d\n", net);

// < (less than): Checks if the left operand is less than the right operand.
bool lst = a < b;
printf("a is equal to b - %d\n", lst);

// > (greater than): Checks if the left operand is less than the right operand.
bool gtt = b > a;
printf("a is equal to b - %d\n", gtt);

// <= (less than or equal to): Checks if the left operand is less than or equal to the right operand.
bool ltort = a <= b;
printf("a is equal to b - %d\n", ltort);

// >= (greater than or equal to): Checks if the left operand is greater than or equal to the right operand.
bool gttoe = b >= a;
printf("a is equal to b - %d\n", gttoe);

    return 0;
}