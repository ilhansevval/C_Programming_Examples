#include<stdio.h>

/*
		Print the Floyd's Triangle.

					1
					01
					101
					0101
					10101
					010101
					1010101
					01010101
					101010101
*/

int main(){
	
	int i,j;
	
	for(i=1;i<10;i++){
		
		if(i%2==1)
		{
			printf("1"); 
			
			for(j=2;j<=i;j++)
			{
				if(j%2==0)
					printf("0");
				else
					printf("1");
			}
		}
		
		else
		{
			printf("0");
			
			for(j=2;j<=i;j++)
			{
				if(j%2==0)
					printf("1");
				else
					printf("0");
			}
		}						
		printf("\n");
	}
	
	return 0;
}
