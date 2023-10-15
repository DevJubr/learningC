#include <stdio.h>

int main() {
    // Declare and initialize an array of integers.
    int numbers[] = {10, 20, 30, 40, 50};

    // Access and print the elements of the array.
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, numbers[i]);
    }

    return 0;
}
