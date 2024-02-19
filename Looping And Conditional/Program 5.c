// WAP to print factorial of given number
#include <stdio.h>

int main() 
{
    
    int number;
    unsigned long long factorial = 1; // Use unsigned long long to handle larger factorials

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate the factorial
    if (number < 0) 
	{
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= number; i++) 
		{
            factorial *= i;
        }

        // Display the result
        printf("The factorial of %d is %llu\n", number, factorial);
    }

    return 0;
}

