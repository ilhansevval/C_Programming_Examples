#include <stdio.h>
#define row 3
#define col 2

//Array Addition Using 2 dimensional array

int main(){
	
	int a[row][col], b[row][col], c[row][col],i,j;
	
	puts("Matrix A");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d %d element of array is: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	puts("\nMatrix B");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d %d element of array is: ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	puts("\nAddition of Matrix A and Matrix B");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("\t%d",c[i][j]);
		}
		printf("\n");
	}
	
	return 0;	
}
