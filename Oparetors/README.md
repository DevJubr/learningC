# C Programming Operators

Operators in the C programming language are symbols or keywords that perform operations on operands (variables or values). They are fundamental in C programming and are used to manipulate data and perform calculations. This README provides an overview of the three main types of operators in C: unary, binary, and ternary.

## Unary Operators

Unary operators work with a single operand and are used for various operations, including incrementing, decrementing, and negating values.

- `++` (increment): Increases the value of a variable by 1.
- `--` (decrement): Decreases the value of a variable by 1.
- `-` (negation): Negates the value of a numeric expression.

## Binary Operators

Binary operators operate on two operands and are categorized into several types:

### Arithmetic Operators

- `+` (addition): Adds two operands.
- `-` (subtraction): Subtracts the right operand from the left operand.
- `*` (multiplication): Multiplies two operands.
- `/` (division): Divides the left operand by the right operand.
- `%` (modulo): Computes the remainder of the division.

### Relational Operators

- `==` (equal to): Checks if two operands are equal.
- `!=` (not equal to): Checks if two operands are not equal.
- `<` (less than): Checks if the left operand is less than the right operand.
- `>` (greater than): Checks if the left operand is greater than the right operand.
- `<=` (less than or equal to): Checks if the left operand is less than or equal to the right operand.
- `>=` (greater than or equal to): Checks if the left operand is greater than or equal to the right operand.

### Logical Operators

- `&&` (logical AND): Performs a logical AND operation between two conditions.
- `||` (logical OR): Performs a logical OR operation between two conditions.

### Assignment Operators

- `=` (assignment): Assigns a value to a variable.
- `+=`, `-=`, `*=`, `/=`, `%=` (compound assignment): Performs an operation and assigns the result to a variable.

### Bitwise Operators

These operators manipulate individual bits.

- `&` (bitwise AND): Performs a bitwise AND operation.
- `|` (bitwise OR): Performs a bitwise OR operation.
- `^` (bitwise XOR): Performs a bitwise XOR operation.
- `<<` (left shift): Shifts bits to the left.
- `>>` (right shift): Shifts bits to the right.

## Ternary Operator

The ternary operator is unique as it takes three operands and is often used for conditional expressions.

- The format is: `condition ? expression_if_true : expression_if_false`.

```c
#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int max;

    max = (x > y) ? x : y;

    printf("The maximum value is: %d\n", max);

    return 0;
}


```

## `sizeof` Operator in C

In C programming, the `sizeof` operator is used to determine the size, in bytes, of a data type or an object. This operator is incredibly useful when you need to allocate memory dynamically, work with arrays, or understand the memory layout of your data structures.

## Basic Syntax

The basic syntax of the `sizeof` operator is as follows:

````c
sizeof(type);

```c
#include <stdio.h>

int main() {
    int integerType;
    char charType;
    double doubleType;

    printf("Size of int: %zu bytes\n", sizeof(integerType));
    printf("Size of char: %zu bytes\n", sizeof(charType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));

    return 0;
}

````

Understanding these operators is essential for writing effective and efficient C code.

Feel free to modify and use this README for your Git repository documentation.
