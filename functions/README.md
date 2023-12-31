Let's dive into the world of **C functions**. Functions are essential building blocks in programming, providing modularity, code reusability, and better organization. In this comprehensive tutorial, we'll cover everything you need to know about functions in C.

## Table of Contents

1. [Introduction to Functions](#introduction-to-functions)
2. [Function Declaration and Definition](#function-declaration-and-definition)
3. [Function Calls](#function-calls)
4. [Return Types](#return-types)
5. [Examples](#examples)

### Introduction to Functions

A function in C is a self-contained block of statements that performs a specific task. It encapsulates a set of instructions that can be executed whenever needed. Functions enhance code readability, maintainability, and allow us to break down complex problems into smaller, manageable pieces.

### Function Declaration and Definition

- **Function Declaration**: In a function declaration, we specify the function name, its return type, and the number and types of its parameters. This informs the compiler that the function exists elsewhere in the program.
  - Syntax: `return_type name_of_the_function(parameter1_type parameter1_name, parameter2_type parameter2_name);`
  - Example:
    ```c
    int sum(int a, int b);
    ```
- **Function Definition**: The function definition contains the actual statements executed when the function is called. It starts with the function declaration, so explicit declaration is not necessary.
  - Example:
    ```c
    int sum(int a, int b) {
        return a + b;
    }
    ```

### Function Calls

- A function call instructs the compiler to execute the function. We use the function name and provide arguments.
  - Example:
    ```c
    int add = sum(10, 30);
    ```

### Return Types

- The return type specifies what type of value the function returns after execution.
  - If no value needs to be returned, we use `void`.
  - Example:
    ```c
    int func(parameter1_type, parameter2_type);
    ```

### Examples

Here's a simple example demonstrating function usage:

```c
#include <stdio.h>

// Function declaration
int sum(int a, int b);

int main() {
    int add = sum(10, 30);
    printf("Sum is: %d", add);
    return 0;
}

// Function definition
int sum(int a, int b) {
    return a + b;
}
```

Output:

```
Sum is: 40
```

##Let's explore the concept of **`void`** in the C programming language.

1. **Void as a Return Type**:

   - In C, **`void`** serves as a return type for functions.
   - When a function has a **`void`** return type, it means the function does not return any value.
   - Example:
     ```c
     void printCompanyInfo() {
         // Function to print company information
         // No return value
         // ...
     }
     ```
   - In the above example, the **`printCompanyInfo`** function doesn't return anything; it simply performs a task (printing company details).

2. **Void Functions**:

   - A **void function** is one that doesn't return a value.
   - Although it lacks a return value, it can still use the **`return;`** statement to exit at any point.
   - Example:
     ```c
     int sumFirst10Numbers(void) {
         int sum = 0;
         for (int i = 1; i <= 10; ++i)
             sum += i;
         return sum;
     }
     ```
   - In this case, the **`sumFirst10Numbers`** function calculates the sum of the first 10 numbers but doesn't accept any parameters.

3. **Summary**:
   - **`void`** represents "no type," "no value," or "no parameters," depending on the context.
   - It's a versatile keyword used for functions, function parameters, and pointers.

Remember, is a powerful tool in C, allowing flexibility and generality in various scenarios.

Remember, **`void`** and **`functions`** are powerful tools in C programming. They allow us to create modular, efficient, and well-organized code. Feel free to explore more complex functions and unleash your creativity! 🚀.

Source:
(1) C Functions - GeeksforGeeks. https://www.geeksforgeeks.org/c-functions/.
(2) C Functions - Programiz. https://www.programiz.com/c-programming/c-functions.
(3) C Functions - W3Schools. https://www.w3schools.in/c-programming/functions.
(4) C Functions - W3Schools. https://www.w3schools.com/c/c_functions.php.
(5) en.wikipedia.org. https://en.wikipedia.org/wiki/C_(programming_language).
