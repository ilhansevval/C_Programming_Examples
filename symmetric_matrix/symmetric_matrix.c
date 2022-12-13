#include <stdio.h>
#define size 100

int main(){
	
	int row,col,i,j,matrix[size][size],symmetry=1;
	
	printf("Enter the row number of matrix:");
	scanf("%d",&row);
	
	printf("\nEnter the column number of matrix:");
	scanf("%d",&col);	
	
	puts("\nEnter the Matrix elements");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("[%d][%d] index of matrix is: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	puts("\nMatrix is:");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",matrix[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(matrix[i][j] != matrix[i][j])	
				symmetry=0;
				break;
		}
	}
	
	if(symmetry == 1)
	{
		puts("\nMatrix is symmetric");
	}
	else
		puts("\nMatrix is not symmetric");
	
	return 0;
	
}
