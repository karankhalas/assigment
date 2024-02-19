#include <stdio.h>

int main() 
{
    // Declare variables
    int n;

    // Get input from the user
    printf("Enter the number of rows/columns: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Initialize variables for directions
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    // Initialize variable for the current number to be printed
    int num = 1;

    // Loop to fill the matrix in a spiral order
    while (left <= right && top <= bottom) 
	{
        // Move from left to right
        for (int i = left; i <= right; i++) 
		{
            matrix[top][i] = num++;
        }
        top++;

        // Move from top to bottom
        for (int i = top; i <= bottom; i++) 
		{
            matrix[i][right] = num++;
        }
        right--;

        // Move from right to left
        for (int i = right; i >= left; i--) 
		{
            matrix[bottom][i] = num++;
        }
        bottom--;

        // Move from bottom to top
        for (int i = bottom; i >= top; i--) 
		{
            matrix[i][left] = num++;
        }
        left++;
    }

    // Print the spiral matrix
    for (int i = 0; i < n; i++) 
	{
        for (int j = 0; j < n; j++) 
		{
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

