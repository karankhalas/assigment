#include <stdio.h>

int main() 
{
    // Declare variables
    int n, sum = 0;

    // Get input from the user
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) 
	{
        for (int j = 1; j <= i; j++) 
		{
            sum += j;
        }
    }

    // Display the result
    printf("The sum of the series is: %d\n", sum);

    return 0;
}

