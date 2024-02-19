// WAP to print Fibonacci series up to given numbers
#include <stdio.h>

int main() 
{
    // Declare variables
    int n, first = 0, second = 1, next;

    // Get input from the user
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    // Print Fibonacci series
    printf("Fibonacci series up to %d terms:\n", n);

    for (int i = 0; i < n; i++) 
	{
        printf("%d, ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}

