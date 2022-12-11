#include <stdio.h>
#define size 2

//Inserting numbers to three dimensional array

int main(){
	
	int arr[size][size][size],i,j,k;
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			for(k=0;k<size;k++)
			{
				printf("Enter the index of [%d][%d][%d] element:",i,j,k);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	
	printf("\n");
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			for(k=0;k<size;k++)
			{
				printf("The element of [%d][%d][%d] index: %d\n", i, j, k, arr[i][j][k]);
			}
		}
	}
	
	
	
	
	
	return 0;
	
}
