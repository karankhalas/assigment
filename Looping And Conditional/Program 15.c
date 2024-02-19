//15)Calculate sum of 10 numbers using of while loop
#include <stdio.h>
int main() 
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) 
	{
        sum += i;
    }

    printf("Sum = %d", sum);
   return 0;
}

