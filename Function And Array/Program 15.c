#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str[100], word[20], mx[20], mn[20], c; 
    int i = 0, j = 0, flg = 0;
	
    printf("\n\nFind the largest and smallest word in a string :\n");
    printf("-----------------------------------------------------\n");
    printf("Input the string : ");
    i = 0;
    while ((c = getchar()) != '\n' && i < sizeof(str) - 1) 
	{ // Read character by character until newline or end of array
        if (isalnum(c) || isspace(c)) 
		{ // Check for alphanumeric characters and spaces
            str[i++] = c; // Store characters in str array
        }
    }
    str[i] = '\0'; // Terminate the string with null character
    // Loop through the input string to find the largest and smallest words
    for (i = 0; i < strlen(str); i++) 
	{
        while (i < strlen(str) && !isspace(str[i]) && isalnum(str[i])) 
		{ // Check for alphanumeric characters
            word[j++] = str[i++]; // Store characters in word array until a space or non-alphanumeric character is found
        }
        if (j != 0) 
		{ // Check if there's a word
            word[j] = '\0'; // Terminate the word with null character
            if (!flg) 
			{ // Check if it's the first word encountered
                flg = !flg; // Set flag to indicate the first word
                strcpy(mx, word); // Copy the first word to both mx (max) and mn (min)
                strcpy(mn, word);
            }
            if (strlen(word) > strlen(mx)) 
			{ // Compare word lengths to find the maximum
                strcpy(mx, word); // Update mx if the current word is longer
            }
            if (strlen(word) < strlen(mn)) 
			{ // Compare word lengths to find the minimum
                strcpy(mn, word); // Update mn if the current word is shorter
            }
            j = 0; // Reset word index for the next word
        }
    }
    // Display the largest and smallest words found in the input string
    printf("The largest word is '%s' \nand the smallest word is '%s' \nin the string: '%s'.\n", mx, mn, str);
	
    return 0; // Return 0 to indicate successful execution of the program
}
