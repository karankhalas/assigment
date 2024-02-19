
#include <stdio.h>

int main() 
{
    // Declare variables
    int rows;

    // Get input from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the pattern
    for (int i = 1; i <= rows; i++) 
	{
        for (int j = 1; j <= i; j++) 
		{
            // Print alternating 1 and 0
            printf("%d", j % 2);
        }
        printf("\n");
    }

    return 0;
}

