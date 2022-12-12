#include <stdio.h>
#define size 100

//One Dimensional Array to Two Dimensional Array(Matrix)

int main(){
	
	int var,i,arr[size],row,col,matrix[size][size],j,k;
	
	printf("How many elements do you have in your array: ");
	scanf("%d",&var);
	
	for(i=0;i<var;i++)
	{
		printf("\nEnter the %d. element of array: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	puts("\nElements of array are: \n");
	for(i=0;i<var;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	printf("\nEnter the row number of matrix: ");
	scanf("%d",&row);
	
	printf("\nEnter the column number of matrix: ");
	scanf("%d",&col);
	
	if(var%row == 0 && var%col == 0)
	{
		i=0;
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			{
				matrix[j][k] = arr[i];
				i++;
			}
		}
		
		puts("\nMatrix\n");
		for(j=0;j<row;j++)
		{
			for(k=0;k<col;k++)
			{
				printf("%3d",matrix[j][k]);
			}
			printf("\n");
		}
		
	}
	else
		puts("\nError! Number of Array Elements Must be Fully Divided into Rows and Columns");
	
	return 0;
		
}
