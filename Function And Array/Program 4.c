#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) 
{
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1) 
	{
        return 1;
    }

    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}

int main() 
{
    
    int num;

    // Get input from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) 
	{
        printf("Factorial is not defined for negative numbers.\n");
    } else 
	{
        // Call the function to calculate factorial
        int result = factorial(num);

        // Display the result
        printf("The factorial of %d is: %d\n", num, result);
    }

    return 0;
}

