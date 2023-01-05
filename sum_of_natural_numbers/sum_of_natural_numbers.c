#include<stdio.h>

//Find the sum of the first 50 natural numbers.

int main(){
	
	int i,sum=0;
	
	puts("\n*****************Finding the Sum of First 50 Natural Number*****************\n");
	
	for(i=0;i<50;i++)
	{
		sum+=i;
	}
	
	printf("Summation: %d",sum);
	
	return 0;
	
}
