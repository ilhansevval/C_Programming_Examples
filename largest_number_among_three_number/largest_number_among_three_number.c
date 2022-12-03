#include <stdio.h>
#include <stdlib.h>

//Find the Largest Number Among Three Numbers

int main() {
	
	float var1,var2,var3;
	
	printf("Enter three different number: ");
	scanf("%f %f %f",&var1,&var2,&var3);
	
	if (var1 > var2 && var1 > var3)
	{
		printf("The largest number is: %.2f",var1);
	}
	
	else if(var2 > var1 && var2 > var3)
	{
		printf("The largest number is: %.2f",var2);
	}
	else
		printf("The largest number is: %.2f",var3);
	
	return 0;
}
