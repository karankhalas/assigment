#include <stdio.h> 

int main() 
{
    int num, r, sum = 0, temp; // Declare variables for the input number, remainder, sum, and a temporary variable.

    printf("Input a number: "); // Prompt the user to input a number.
    scanf("%d", &num); // Read the number from the user.

    temp = num; // Save the original number in a temporary variable.

    while (num != 0) 
	{ // Start a loop to extract digits from the number.
        r = num % 10; // Get the last digit of the number.
        sum = sum + (r * r * r); // Calculate the sum of cubes of each digit.
        num = num / 10; // Move to the next digit.
    }

    if (sum == temp) // If the sum of cubes of digits is equal to the original number.
        printf("%d is an Armstrong number.\n", temp); // Print that it's an Armstrong number.
    else
        printf("%d is not an Armstrong number.\n", temp); // Otherwise, print that it's not an Armstrong number.

    return 0; // Return 0 to indicate successful execution.
}

