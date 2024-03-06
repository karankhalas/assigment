#include<stdio.h>
int main()
{
	int row,col,a[2][2],b[2][2],multi[2][2];
	printf("                         Matrix Multiplication\n");
	printf("Matrix: 1 \n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("Enter elements :");
			scanf("%d",&a[row][col]);
		}
	}
		for(row=0;row<2;row++)        
	{
		for(col=0;col<2;col++)
		{
			printf(" %d ",a[row][col]);
		}
		printf("\n");
	}
	
	
		printf("Matrix: 2\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("Enter elements :");
			scanf("%d",&b[row][col]);
		}
	}
		for(row=0;row<2;row++)               // this line for display the all rows and colums.
	{
		for(col=0;col<2;col++)
		{
			printf(" %d ",b[row][col]);
		}
		printf("\n");
	}
	
	
//	        //multiplication
		for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{	
			multi[row][col]=0;
			for(int k=0;k<2;k++){                                        //row of a[][] and col of b[][]
			                                                            //(a[col][0],a[col][1],a[col][2]...)*(b[0][row],[1][row],[2][row]...) 
				multi[row][col]+= a[col][k]*b[k][row];
			}
		}
	}
	
		printf("Result : Multiplication Matrix \n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf(" %d ",multi[col][row]);
		}
		printf("\n");
	}
	
}
