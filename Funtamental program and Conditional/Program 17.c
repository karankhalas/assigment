#include <stdio.h>  

void main()
{
   int m,n;   
   printf("Input the  value of m :");   
   scanf("%d",&m);   
   if(m!=0)   // Check if 'm' is not equal to 0.
   {
     if(m>0)
       n=1;   // If 'm' is greater than 0, set 'n' to 1.
     else
       n=-1;   // If 'm' is less than 0, set 'n' to -1.
   }
   else
     n=0;   // If 'm' is equal to 0, set 'n' to 0.
   printf("The value of m = %d \n",m);   // Print the value of 'm'.
   printf("The value of n = %d \n",n);   // Print the value of 'n'.
}

