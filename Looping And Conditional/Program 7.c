#include <stdio.h>

int main() 
{
    // Declare variables
    int number, reversedNumber = 0, remainder;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Reverse the number
    while (number != 0) 
	{
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Display the reversed number
    printf("The reversed number is: %d\n", reversedNumber);

    return 0;
}

