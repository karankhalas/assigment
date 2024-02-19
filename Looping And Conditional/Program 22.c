#include <stdio.h>

int main() 
{
    // Declare variables
    int n, sum = 0;

    // Get input from the user
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Calculate the sum of natural numbers
    for (int i = 1; i <= n; i++) 
	{
        sum += i;
    }

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
