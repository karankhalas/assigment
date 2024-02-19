#include <stdio.h>

int main() 
{
    // Declare variables
    int number, reversedNumber = 0, remainder;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Reverse the number using a for loop
    for (; number != 0; number /= 10) 
	{
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

    // Display the reversed number
    printf("The reversed number is: %d\n", reversedNumber);

    return 0;
}

