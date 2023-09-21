#include <stdio.h>

int main() {
    int x = 10, y = 20;
    
    // Unary Plus Operator
    int unary_plus = +x; // unary_plus will be 10
    
    // Unary Minus Operator
    int unary_minus = -x; // unary_minus will be -10
    
    // Increment Operator
    int pre_increment = ++x; // pre_increment will be 11, and x will be 11
    int post_increment = y++; // post_increment will be 20, but y will become 21
    
    // Decrement Operator
    int pre_decrement = --x; // pre_decrement will be 10, and x will be 10
    int post_decrement = y--; // post_decrement will be 21, but y will become 20
    
    // Logical NOT Operator
    int logical_not = !x; // logical_not will be 0 (false)
    
    // Bitwise NOT Operator
    int bitwise_not = ~x; // bitwise_not will be -11 (in two's complement)
    
    // Sizeof Operator
    int size_of_int = sizeof(int); // size_of_int will be the size of an int in bytes
    
    // Address-of Operator
    int* ptr = &x; // ptr holds the address of x
    
    // Indirection (Dereference) Operator
    int value = *ptr; // value will be 10, as it's the value at the address held by ptr
    
    // Comma Operator
    int a = (x++, y++); // a will be 10 (result of the rightmost expression), x will be 11, and y will be 22
    
    // Print the results
    // printf("Unary Plus: %d\n", unary_plus);
    printf("Unary Minus: %d\n", unary_minus);
    printf("Pre Increment: %d\n", pre_increment);
    printf("Post Increment: %d\n", post_increment);
    printf("Pre Decrement: %d\n", pre_decrement);
    printf("Post Decrement: %d\n", post_decrement);
    printf("Logical NOT: %d\n", logical_not);
    printf("Bitwise NOT: %d\n", bitwise_not);
    printf("Size of int: %d\n", size_of_int);
    printf("Value through Indirection Operator: %d\n", value);
    printf("Comma Operator: %d\n", a);

    return 0;
}
