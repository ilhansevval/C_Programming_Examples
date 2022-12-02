#include <stdio.h>
#include <stdlib.h>

//Check Whether a Temperature is Below or Above the Freezing Point

int main() {
	
	int temperature;
	
	printf("Enter the temperature: ");
	scanf("%d",&temperature);
	
	//32 Fahrenheit is equals to 0 Celsius
	if (temperature<32)
	{
		printf("\n%d Fahrenheit is below freezing point",temperature);
	}
	
	else
		printf("\n%d Fahrenheit is above freezing point",temperature);
		
	return 0;
}
