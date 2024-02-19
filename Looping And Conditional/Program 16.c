//16.Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>

int main() 
{
    // Declare variables
    int n, sum = 0, i = 1;

    // Get input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate the sum using a while loop
    while (i <= n) 
	{
        sum += i;
        i++;
    }

    // Display the result
    printf("The sum of natural numbers up to %d is: %d\n", n, sum);

    return 0;
}

