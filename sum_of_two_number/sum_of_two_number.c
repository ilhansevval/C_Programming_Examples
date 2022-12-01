#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int var1, var2, sum;
	
	printf("Enter two number: ");
	scanf("%d %d",&var1,&var2);
	
	//The Summation Formula
	sum = var1+ var2;
	
	printf("The sum of the two number is %d",sum);
	
	return 0;
}
