
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
        for (int j = 1; j <= 2 * i - 1; j++) 
		{
            // Print asterisk for odd positions
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

