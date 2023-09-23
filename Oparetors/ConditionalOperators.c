#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int max;

    max = (x > y) ? x : y;

    printf("The maximum value is: %d\n", max);

    return 0;
}
