#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    
    // Calculate the size of the array in bytes
    size_t size = sizeof(numbers);

    // Calculate the number of elements in the array
    int num_elements = size / sizeof(numbers[0]);

    printf("Size of the numbers array: %lu bytes\n", size);
    printf("Number of elements in the array: %d\n", num_elements);
    
    return 0;
}
