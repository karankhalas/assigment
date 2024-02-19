//1.) Write a C program to accept two integers and check whether they are equal or not.

#include <stdio.h>   
void main()
{
    int int1, int2;  

    printf("Input the values for Number1 and Number2 : ");   // Prompt the user to input values for Number1 and Number2.
    scanf("%d %d", &int1, &int2);   // Read and store the user's input in 'int1' and 'int2'.
    if (int1 == int2)   // Check if Number1 is equal to Number2.
        printf("Number1 and Number2 are equal\n");   // Print a message if Number1 and Number2 are equal.
    else
        printf("Number1 and Number2 are not equal\n");   // Print a message if Number1 and Number2 are not equal.
}

