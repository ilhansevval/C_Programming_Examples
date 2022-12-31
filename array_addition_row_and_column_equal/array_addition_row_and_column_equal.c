#include <stdio.h>

//Write the C code that adds two matrices with the same number of rows and columns. Matrix values will be entered from the keyboard.

int main(){
	
	int r1,c1,r2,c2,i,j,arr1[100][100],arr2[100][100],sum[100][100];
	
	printf("Enter the number of rows and columns of first array: ");
	scanf("%d %d",&r1,&c1);
	
	printf("Enter the number of rows and columns of second array: ");
	scanf("%d %d",&r2,&c2);
	
	puts("\nEnter elements of 1st matrix:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("Enter the element of first array [%d][%d]:",i+1,j+1);
			scanf("%d",&arr1[i][j]);
		}	
	}
      	
    puts("\nEnter elements of 2nd matrix:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("Enter the element of second array [%d][%d]:",i+1,j+1);
			scanf("%d",&arr2[i][j]);
		}
	}
	
	if(r1==r2 && c1==c2)
	{
		puts("\nAddition of first and second array");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				sum[i][j] = arr1[i][j] + arr2[i][j];
				printf("\t%d",sum[i][j]);
			}
			printf("\n");
		}
	}
	else
		puts("\nRow and Column is not equal in both array");
	
	return 0;
} 
