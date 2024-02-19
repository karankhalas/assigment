#include <stdio.h>
void reverseString(char str[], int start, int end) //// Function to reverse a string using recursion
{
    if (start < end) 
	{
        // Swap characters at the start and end positions
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Recursively reverse the substring
        reverseString(str, start + 1, end - 1);
    }
}

int main() 
{
    
    char str[100];

    // Get input from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    int length = 0;
    while (str[length] != '\0') 
	{
        length++;
    }

    // Call the function to reverse the string
    reverseString(str, 0, length - 1);

    // Display the reversed string
    printf("Reversed String: %s\n", str);

    return 0;
}

