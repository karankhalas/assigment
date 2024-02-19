#include <stdio.h>   
void main()
{
    float PerHeight;   

    printf("Input the height of the person (in centimetres) :");   // Prompt the user to input the height in centimeters.
    scanf("%f", &PerHeight);   // Read and store the user's input in 'PerHeight'.

    if (PerHeight < 150.0)   // Check if 'PerHeight' is less than 150.0.
        printf("The person is Dwarf. \n");   // Print a message indicating that the person is a dwarf.
    else if ((PerHeight >= 150.0) && (PerHeight < 165.0))   // Check if 'PerHeight' is between 150.0 and 165.0.
        printf("The person is  average heighted. \n");   // Print a message indicating that the person has an average height.
    else if ((PerHeight >= 165.0) && (PerHeight <= 195.0))   // Check if 'PerHeight' is between 165.0 and 195.0.
        printf("The person is taller. \n");   // Print a message indicating that the person is taller.
    else
        printf("Abnormal height.\n");   // Print a message indicating that the height is abnormal.
}

