//Write a program to find out the max from given number
#include <stdio.h>

int main() 
{
    // Declare variables
    int n, num, max;

    // Get input from the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if there is at least one element
    if (n <= 0) 
	{
        printf("No elements to find the maximum.\n");
        return 1;  // Exit the program with an error code
    }

    // Get the first element as the initial max
    printf("Enter element 1: ");
    scanf("%d", &max);

    // Loop to find the maximum among the remaining elements
    
	for (int i = 2; i <= n; i++) 
	{
        printf("Enter element %d: ", i);
        scanf("%d", &num);

        if (num > max) 
		{
            max = num;
        }
    }

    // Display the result
    printf("The maximum among the entered numbers is: %d\n", max);

    return 0;
}

