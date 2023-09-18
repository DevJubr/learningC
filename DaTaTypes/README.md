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

An overview of the C code provided and explains its various components, including implicit and explicit type conversions.

## Code Overview

The provided C code demonstrates the concept of type conversion in C programming. It includes examples of both implicit and explicit type conversions. The code consists of several sections, each with its own explanation and example.

## Section 1: Character Type and Conversion

In this section, the code works with character data types and demonstrates different ways to print character values and perform arithmetic operations.

````c
char a = 'c';
printf("Different Value of A - %d, %x, %c\n", a, a, a);
char a is assigned the character 'c'.
The code then uses printf to print the value of 'a' in decimal, hexadecimal, and character form.
Implicit Conversion:

```c

int r = 'a' + 2;
printf("Result of a + 2: %d\n", r);
``
An implicit type conversion occurs when 'a' (a character) is added to an integer (2).
The result is stored in an integer variable 'r' and printed.
Explicit Conversion:

```c

int rF = 'a' + 2;
printf("Result of Rf + 2: %f\n", (float)rF);
``
Explicit type conversion is demonstrated here.
'a' is added to 2, and the result is explicitly cast to a float before printing.
Section 2: Floating-Point Type and Conversion
This section deals with floating-point data types and showcases the impact of type conversion on arithmetic operations.

```c

float z = 3.5f;
float y = 2.1f;
float x = 7.9f;
````

Three floating-point variables, 'x', 'y', and 'z', are declared and initialized with specific float values.
No Conversion:

```c

int Nc = x + y + z;
printf("Result (No Conversion): %d\n", Nc); // Answer: 13
```

The code attempts to add 'x', 'y', and 'z' directly into an integer variable 'Nc' without type conversion.
With Conversion:

```c

int Yc = (int)x + (int)y + (int)z;
printf("Result: %d\n", Yc); // Answer: 12

```

In this case, explicit type conversion is used to convert 'x', 'y', and 'z' to integers before addition.
Conclusion
This code illustrates the concepts of implicit and explicit type conversion in C programming. It showcases how data types can affect arithmetic operations and provides examples of both character and floating-point type conversions.
