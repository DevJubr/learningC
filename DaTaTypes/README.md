# C Programming Basics

This README provides a simple overview of basic C programming concepts and data types. It aims to help beginners understand the fundamental building blocks of C programming.

## Introduction

C is a widely used programming language known for its simplicity and versatility. It's important to grasp some basic concepts to get started with C programming.

## Integer Data Types

In C, we have two main categories of integers: **signed** and **unsigned**.

### Signed Integers

1. **short** - `%hi`

   - Represents short integers.
   - Example: `short a = 2;`

2. **int** - `%d`

   - Represents regular integers.
   - Example: `int b = 23;`

3. **long** - `%ld`

   - Represents long integers.
   - Example: `long c = 5647l;`

4. **long long** - `%lld`
   - Represents very long integers.
   - Example: `long long d = 65843974ll;`

### Unsigned Integers

Unsigned integers represent only non-negative values.

1. **unsigned short** - `%hu`

   - Example: `unsigned short us = 267;`

2. **unsigned int** - `%u`

   - Example: `unsigned int ui = 3432;`

3. **unsigned long** - `%lu`

   - Example: `unsigned long ul = 357646;`

4. **unsigned long long** - `%llu`
   - Example: `unsigned long long ull = 357646;`

## Octal and Hexadecimal Numbers

### Octal Numbers

Octal numbers are base-8 numbers, and they are prefixed with '0'.

Example:

```c
int octa = 0456; // Represents octal number 0456
```

### Hexadecimal Numbers

Hexadecimal Numbers are base-16 numbers, and they are prefixed with '0x' or '0X'.

Example:

```c
int hex = 0Xfff; // Represents hexadecimal number 0xfff
```

## Signed vs. Unsigned Data Types

### Signed Data Types

- Can represent both positive and negative values.
- Use one bit to represent the sign (positive or negative) and the remaining bits for magnitude.

### Unsigned Data Types

- Can represent only non-negative (positive) values.
- Do not use any bits for sign; all bits are used for magnitude.

This basic overview should help you start your journey into C programming. Experiment with these concepts to gain hands-on experience and explore more advanced topics as you become more comfortable with the language. Happy coding!

## C Program: Conditional Printing with Boolean Variable

```c
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool isActive = true;

    if (isActive) {
        printf("yes!");
    } else {
        printf("unActive");
    }

    return 0;
}
```

A simple C program that demonstrates conditional printing based on the value of a boolean variable. The program uses the C standard library `<stdio.h>` for input and output operations and the `<stdbool.h>` header for the boolean data type.

## Program Description

The program defines a boolean variable named `isActive` and initializes it with the value `true`. It then uses an `if` statement to check the value of `isActive`. If `isActive` is `true`, it prints "yes!" to the console. Otherwise, it prints "unActive."

## Boolean Data Type in C

In C, the `<stdbool.h>` header introduces the `bool` data type, which can hold either `true` or `false` values. This data type is particularly useful for creating conditional logic in your programs, as demonstrated in this example.

```

```
