#include <stdio.h>
#include <stdlib.h>

//Check whether a given number is even or odd

int main() {
	
	int var;
	
	printf("Enter an integer value: ");
	scanf("%d",&var);
	
	//if the number can divisible by 2 which means that is even in another case number is odd
	if (var % 2 == 0)
	{
		printf("\n%d is an even number",var);
		
	}
	else
		printf("\n%d is an odd number",var);
	
	return 0;
}
