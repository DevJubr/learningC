#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int length = sizeof(numbers) / sizeof(numbers[0]); // Calculate the length of the array.

    printf("Traversing the array using a for loop:\n");

    for (int i = 0; i < length; i++) {
        printf("Element %d: %d\n", i + 1, numbers[i]);
    }

    return 0;
}
