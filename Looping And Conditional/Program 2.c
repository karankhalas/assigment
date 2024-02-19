//2. WAP to accept 5 numbers from user and display all numbers
#include <stdio.h>

int main() 
{
    // Declare variables
    int numbers[5];

    // Get input from the user
    printf("Enter 5 numbers:\n");
    
    for (i=0;i<5;i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the entered numbers
    printf("\nEntered numbers are:\n");
    
    for (i=0;i<5;i++) 
	{
        printf("%d\n", numbers[i]);
    }

    return 0;
}
