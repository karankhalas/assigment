//Write a program make a summation of given number
#include <stdio.h>

int main() 
{
    // Declare variables
    int n, sum = 0;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the summation
    for (i = 1; i <= n; i++) 
	{
        sum += i;
    }

    // Display the result
    printf("The summation of numbers up to %d is: %d\n", n, sum);

    return 0;
}

