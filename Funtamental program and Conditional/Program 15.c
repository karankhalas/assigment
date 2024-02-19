//16.Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
#include<stdio.h>  
int main()    
{    
int a=10, b=20;      
printf("Before swap a=%d b=%d",a,b);      
a=a+b;//a=30 (10+20)    
b=a-b;//b=10 (30-20)    
a=a-b;//a=20 (30-10)    
printf("\nAfter swap a=%d b=%d",a,b);    
return 0;  
}   

