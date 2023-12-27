#include <stdio.h>

// Function declaration
int sum(int a, int b);

int main() {
    int add = sum(10, 30);
    printf("Sum is: %d", add); //ans : 40
    return 0;
}

// Function definition
int sum(int a, int b) {
    return a + b;
}
