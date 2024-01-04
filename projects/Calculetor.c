#include <stdio.h>

// Function prototypes
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

int main()
{
    char operation;
    float num1, num2, result;

    do
    {
        // Display menu
        printf("Simple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("Enter your choice (1-4): ");
        scanf(" %c", &operation);

        // Get user input
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        // Perform the selected operation
        switch (operation)
        {
        case '1':
            result = add(num1, num2);
            break;
        case '2':
            result = subtract(num1, num2);
            break;
        case '3':
            result = multiply(num1, num2);
            break;
        case '4':
            // Handle division by zero
            if (num2 != 0)
            {
                result = divide(num1, num2);
            }
            else
            {
                printf("Error: Cannot divide by zero.\n");
                continue; // Skip to the next iteration
            }
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            continue; // Skip to the next iteration
        }

        // Display the result
        printf("Result: %.2f\n", result);

        // Ask the user if they want to perform another calculation
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &operation);

    } while (operation == 'y' || operation == 'Y');

    printf("Calculator closed.\n");

    return 0;
}

// Function definitions
float add(float num1, float num2)
{
    return num1 + num2;
}

float subtract(float num1, float num2)
{
    return num1 - num2;
}

float multiply(float num1, float num2)
{
    return num1 * num2;
}

float divide(float num1, float num2)
{
    return num1 / num2;
}
