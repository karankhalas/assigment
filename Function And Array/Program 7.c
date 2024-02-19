#include <stdio.h>

int main() 
{
    
    char str[100];
    int alphabets, digits, spChars, i;
    
    printf("Enter any string: ");
    gets(str);
    
    i = 0;
    while(str[i]!='\0')
	{
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
		{
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
		{
            digits++;
        }
        else
		{
            spChars++;
        }
        i++;
    }
    
    printf("Number of alphabets: %d", alphabets);
    printf("\nNumber of Digits: %d", digits);
    printf("\nNumber of Special Chars: %d", spChars);
    
    return 0;
}
