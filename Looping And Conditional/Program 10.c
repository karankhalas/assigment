//.Write a program you have to make a summation of first and last Digit
#include <stdio.h>

int main() 
{
    // Declare variables
    int number, firstDigit, lastDigit, sum;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Extract the last digit
    lastDigit = number % 10;

    // Extract the first digit
    while (number >= 10) 
	{
        number /= 10;
    }
    firstDigit = number;

    // Calculate the summation
    sum = firstDigit + lastDigit;

    // Display the result
    printf("The summation of the first and last digits is: %d\n", sum);

    return 0;
}

